#include<iostream>
using namespace std;
class Stack{
    public:
        int size; 
        int top;
        int *arr;
    Stack(int s)
    {
        this->size = s;
        this->top = -1;
        arr = new int[size];
    }

    void push(int ele)
    {
        if(top == size - 1)
        {
            cout<<"\n\nStack is Overflow\n\n";
            return;
        }
        else
        {
            top++;
            arr[top] = ele;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout<<"\n\nStack is Underflow\n\n";
            return;
        }
        for(int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<"\n";
        }
    }
};



int main()
{
    Stack s(5);
    s.push(45);
    s.push(33);
    s.display();

    return 0;
}