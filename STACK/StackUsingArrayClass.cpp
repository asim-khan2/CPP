#include<iostream>
using namespace std;

class Stack{
    public:
    //properties or methode or attributes
    int size;
    int top;
    int *arr;

    // member fun. methode fun. beheviour
    Stack(int size)
    {
        this -> size = size;
        this -> top = -1;
        arr = new int[size];
    }
    //push element in stack
    void push(int ele)
    {
        if(top == size - 1)
        {
            cout<<"Stack is overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=ele;
        }
    }
    // pop  element from stack
    void  pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow\n";
        }
        else{
            top--;
        }
    }
    // top element on stack
    int peek()
    {
        if(top == -1 && top  == size - 1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            return  arr[top];

        }
    }

    bool  isEmpty(){
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<"\n";
            }
            cout<<endl;
        }
    }


};

int main()
{
    Stack s(20);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    
    s.display();
    cout<<"Top element of stack is : "<<s.peek()<<endl;


    if(s.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }


    return 0;
}