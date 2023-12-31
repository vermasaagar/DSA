#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head=NULL;

void appendInLast(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

     if(head==NULL)
     head = newNode;
     else{
     Node *temp = head;
     while(temp->next!=NULL){
         temp = temp->next;
     }
     temp->next = newNode;
     }
}

void printList(){
    if(head==NULL){
     cout << "List is empty" << endl;
    }else{
    Node *temp = head;
    while(temp!=NULL){
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
}
}


int main(){

appendInLast(10);
appendInLast(20);
appendInLast(30);
appendInLast(40);

printList();

return 0;
}