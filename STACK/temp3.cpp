#include<iostream>
using namespace std;

#define size 5
int stack[size];
int top = -1;

void Push(int data)
{
    if(top >= size - 1)
    {
        cout << "\n stack is overflow: \n";
        return;
    }else{
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << " STACK is underflow: ";
        return;
    }
    top --;
    
}

int peek()
{
    if(top == -1)
    {
        cout<<"STack is under flow: ";
        return -1;
    }
    return stack[top];
}

bool isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}

void display()
{
    if(top == -1)
    {
        cout << "Stack is empty";
        return ;
    }
    for(int i=top; i >=0; i--)
    {
        cout<<stack[i] << " ";
    }
}

int main()
{
    Push(40);
    Push(30);
    Push(367);
    cout <<"befor pop"<<endl;
    display();
    pop();
    cout << "after pop"<<endl;
    display();

    
    return 0;
}