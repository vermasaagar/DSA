#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *tail=NULL;

void insertion(int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=NULL;

    if(tail==NULL){
        tail=newNode;
        tail->next=newNode;
    }else{
        newNode->next=tail->next;
        tail->next=newNode;
        tail=newNode;
    }
}

void printList(){
    Node *temp=tail->next;
    if(tail==NULL)
        cout<<"List is empty"<<endl;
    else{
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=tail->next);
    }
}

                    
int main(){

    insertion(10);
    insertion(20);
    insertion(30);
    insertion(40);

    printList();
  
return 0;
}