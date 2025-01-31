#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0 || n==1)
        return n;

    return fibo(n-1) + fibo(n-2);
}


void printfibo(int n)
{
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<n; i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout <<"Enter number to find out nth term of fibonacci: ";
    cin>>n;
    printfibo(n);
    cout<<"nth term is : "<<fibo(n);
    return 0;
}