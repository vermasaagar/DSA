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

void findLargest(){
    Node *temp=head;
    int largest = temp->data;
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }else{
        while(temp!=NULL){
            if(temp->data>largest){
                largest = temp->data;
            }
            
            temp=temp->next;
        }
    }
    cout << "Largest element is : " << largest << endl;
}

                    
int main(){

    insertion(10);
    insertion(90);
    insertion(30);
    insertion(40);
    insertion(50);

    findLargest();

    return 0;
}