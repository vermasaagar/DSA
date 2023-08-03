#include <iostream>
#define SIZE 10
using namespace std;

class Stack
{
    int top;
    int arr[SIZE];

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == SIZE - 1)
            cout << "Stack overflow " << endl;
        else
            arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "Deleted Element " << arr[top] << endl;
            top--;
        }
    }
    
    void peek(){
        if(top == -1)
            cout<<"Stack is Empty";
        else   
            cout<<"Top Element is "<<arr[top]<<endl;
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty"<<endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int choice, value;
    Stack s;
    cout << "-----Stack Operations Using Array-----\n";
    while (1)
    {
        cout << "\t**MENU***";
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit";
        cout << "\nEnter your choice ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Number to insert ";
            cin >> value;
            s.push(value);
            cout << value << " is inserted" << endl;
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}