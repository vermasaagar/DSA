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

void addAtParticularPosition(int data,int loc){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=NULL;
    newNode->previous=NULL;
    int i = 1;
    int len = 5;

    Node *temp = head;
    while(i<loc){
        temp = temp->next;
        i++;
    }
    temp->next->previous = newNode;
    newNode->next = temp->next;
    temp->next = newNode;
}


void printList(){
    Node *temp=head;
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}


                    
int main(){

    insertion(10);
    insertion(90);
    insertion(30);
    insertion(40);
    insertion(50);

    addAtParticularPosition(100, 3);

    printList();

    return 0;
}