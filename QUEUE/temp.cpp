#include<iostream>
using namespace std;
#define size 5
int arr[size];
int front = -1;
int rear = -1;

void push(int data)
{
    if(rear == size - 1)
    {
        cout<< "Queue is Overflow: ";
        return;
    }
    rear++;
    arr[rear] = data;
    cout<<"Element inserted: "<<data<<endl;
    if(front == -1)
    {
        front++;
    }
}

int main()
{
    
    return 0;
}