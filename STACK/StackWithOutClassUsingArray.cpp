#include<iostream>
using namespace std;

#define size 5
int stack[size];
int top = -1;

void push(int ele)
{
    if(top==size-1)
    {
         cout<<"Stack is Overflow\n";
    }
    else{
        top++;
        stack[top] = ele;
    }
}

int pop()
{
    if(top>=0)
    {
        int ans = stack[top];
        top--;
        return ans;
    }
    else{
        cout<<"Stack is Underflow\n";
        return -1;
    }
}

void display()
    {
        if(top>=0)
        {
            for(int i=top;i>=0;i--)
            {
                cout<<stack[i]<<"\n";
            }
        }
        else
        {
            cout<<"Stack is Underflow\n";
        }
    }
int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);

    display();
    cout<<"Element poped form  stack is "<<pop()<<endl;
    cout<<"Element poped form  stack is "<<pop()<<endl;
    cout<<"Element poped form  stack is "<<pop()<<endl;
    cout<<"Element poped form  stack is "<<pop()<<endl;
    cout<<"Element poped form  stack is "<<pop()<<endl;

    display();

    return 0;
}