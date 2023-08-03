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



void preorder(Node *root){
    if(root==NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}



int main(){

  Node *root=NULL;
  root=insertBST(root,22);
  insertBST(root,45);
  insertBST(root,12);
  insertBST(root,32);
  insertBST(root,49);
  
  preorder(root);

  return 0;
}