#include<iostream>
using namespace std;
void swap(int &a, int &b);
void swapAdd(int *a, int *b);
void swapValue(int a, int b);
int main()
{
    int a,b;
    cout<<"Enter a number and b: ";
    cin>>a>>b;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
    // swap(a,b);//call by reference veriable
    // swapAdd(&a,&b);//call by Address
    swapValue(a,b);
    cout<<"After swapping : a = "<<a<<" b = "<<b<<endl;

    return 0;
}
void swap(int &a, int &b)
{
    int temp=a;
        a=b;
        b=temp;
}
void swapAdd(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}