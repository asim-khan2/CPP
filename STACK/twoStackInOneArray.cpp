#include<iostream>
using namespace std;

class TwoStack
{
    
        int top2;
        int top1; 
        int size;
        int *arr;

    public:
        TwoStack(int s)
        {
            this->size = s;
            this->top1 = -1;
            this->top2 = s;
            arr = new int[s];
        }
        void push1(int num)
        {
            if(top2-top1>1)
            {
                top1++;
                arr[top1] = num;
            }
            else
            {
                cout<<"Stack is Overflow\n";
            }
        }
        void push2(int num)
        {
            if(top2-top1>1)
            {
                top2--;
                arr[top2]= num;
            }
            else
            {
                cout<<"Stack is Overflow\n";
            }
        }
        int pop1()
        {
            if(top1>=0)
            {
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else
            {
                cout<<"Stack is Underflow\n";
                return -1;
            }
        }
        int pop2()
        {
            if(top2<size)
            {
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else
            {
                cout<<"Stack is Underflow\n";
                return -1;
            }
        }
};

int main()
{
    TwoStack s(5);
    s.push1(11);
    s.push1(22);
    s.push1(33);
    s.push1(44);
    s.push1(55);
    cout<<"Poped form stack1 = "<<s.pop1()<<endl;

    s.push2(11);

    cout<<"Poped  form stack2 = "<<s.pop2()<<endl;


    
    return 0;
}