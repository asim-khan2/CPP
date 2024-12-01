#include<iostream>
using namespace std;

    int stack[10];
    int size = 5;
    int top = -1;

void push(int ele)
{
    if(top >= size-1)
    {
        cout<<"\n\nSTACK is Overflow\n\n";
        return;
    }
    else{
        top++;
        stack[top] = ele;
    }
}

int pop()
{
    if(top == -1)
    {
        cout<<"\n\nSTACK is Underflow\n\n";
        
    }
    top--;
    return stack[top+1];
}

int peek()
{
    if(top == -1)
    {
        cout<<"\n\nStack is Underflow\n\n";
        return -1;
    }
    else{
        return stack[top];
    }
}

bool isEmpty()
{
    if(top == -1){
        return false;
    }
    return true;
}

void display(){
    if(top == -1)
    {
        cout<<"\n\nStack is empty\n\n";
        return;
    }
    cout<<"\nStack element\n";
    for(int i=top; i>=0; i--)
    {
        cout<<stack[i]<<"\n";
    }
    cout<<endl;
}

int main()
{
    while(1)
    {
        cout<<"1-for push\n";
        cout<<"2-for pop\n";
        cout<<"3-for peek\n";
        cout<<"4-for display\n";
        cout<<"5-for check Stack empty\n";
        cout<<"6-for exit\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        int ele;
        
        switch(ch)
        {
            case 1: 
                cout<<"Enter element: ";
                cin>>ele;
                push(ele);
                break;

            case 2:
                cout<<"\n\nPoded element is "<<pop()<<"\n\n";
                break;

            case 3: 
                if(top==-1)
                {
                    cout<<"Stack is Underflow\n";
                    return 0;

                }
                cout<<"Top element is "<<peek()<<endl;
                break;

            case 4:
                display();
                break;

            case 5:
                if(top==-1)
                {
                    cout<<"\n\n Stack is empty\n\n";
                }
                else
                {
                    cout<<"\n\nStack is not empty\n\n";
                }
                break;

                case 6:
                    return 0;

            default:
                cout<<"Invalid choice\n";
        }
    }
}