#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *previous;
};

Node *head=NULL;
Node *tail=NULL;

void insertion(int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=NULL;
    newNode->previous=NULL;

    if(head==NULL){
        head=tail=newNode;
    }else{
        newNode->previous=tail;
        tail->next=newNode;
        tail=newNode;
    }
}


void printList(){
    Node *temp=tail;
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->previous;
        }
    }
    cout<<endl;
}


                    
int main(){

    insertion(10);
    insertion(20);
    insertion(30);
    insertion(40);
    insertion(50);

    printList();

    return 0;
}