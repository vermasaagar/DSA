#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
    int *queue;
    int max, front, rear;

public:
    MyQueue(int max)
    {
        queue = new int[max];
        this->max = max;
        rear = -1;
        front = 0;
    }
    void display();
    void enqueue(int);
    void dequeue();
};

void MyQueue::enqueue(int data)
{

    if (max - 1 == rear)
    {
        cout << "queue is full you can't enqueue" << endl;
    }
    else
    {
        queue[++rear] = data;
        cout << data << " inserted in queue" << endl;
    }
}

void MyQueue::dequeue()
{
    if (rear == -1)
    {
        cout << "queue is empty you can't dequeue" << endl;
    }
    else
    {
        int temp = queue[0];
        for (int i = 0; i < rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
        cout << temp << " removed from queue" << endl;
    }
}

void MyQueue::display()
{
    if (rear == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "| ";
        for (int i = 0; i <= rear; i++)
        {
            cout << queue[i] << " | ";
        }
        cout << endl;
    }
}

int main()
{

    MyQueue q1(3);
    q1.enqueue(5);
    q1.enqueue(10);
    q1.enqueue(15);
    q1.enqueue(120);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    return 0;
}