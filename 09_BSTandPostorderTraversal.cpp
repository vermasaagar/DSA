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



void postorder(Node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
     cout << root->data << " ";
}



int main(){

  Node *root=NULL;
  root=insertBST(root,35);
  insertBST(root,11);
  insertBST(root,29);
  insertBST(root,44);
  insertBST(root,30);
  insertBST(root,19);
  
  postorder(root);

  return 0;
}