#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int element){
        data=element;
        left=NULL;
        right=NULL;
    }
};

int arr[5];
int i = 0;

Node* insertBST(Node *root,int data){

    if(root==NULL)
      return new Node(data);

    if(data<root->data){
        root->left=insertBST(root->left,data);
    }else{
        root->right=insertBST(root->right,data);
    }

    return root;
}


void inorder(Node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    arr[i] = root->data;
    i++;
    inorder(root->right);
}


int main(){

  Node *root=NULL;
  root=insertBST(root,5);
  insertBST(root,10);
  insertBST(root,3);
  insertBST(root,1);
  insertBST(root,20);

  
  inorder(root);

   for (int i = 4; i >= 0;i--){
        cout << arr[i] << " ";
    }

  return 0;
}