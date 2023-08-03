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



void inorder(Node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}



int main(){

  Node *root=NULL;
  root=insertBST(root,43);
  insertBST(root,10);
  insertBST(root,29);
  insertBST(root,56);
  insertBST(root,30);
  insertBST(root,19);
  
  inorder(root);

  return 0;
}