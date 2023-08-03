#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *top=NULL;

void push(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
}


void printStack(){
    Node *temp = top;
    if(top==NULL)
        cout << "Stack is empty" << endl;
    else{
        while(temp!=NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}


int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    printStack();


    return 0;
}