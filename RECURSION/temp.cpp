#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout<<"Enter the number for calculate factorial : ";
    cin>>n;
    int res = factorial(n);
    if(res != -1)
    {
        cout<<n<<"! factorial is "<<factorial(n);
    }
    else 
    {
        cout<<n<<"! Can't find factorial of Negative number ";
    }
    return 0;
}

int factorial(int n)
{
    if(n < 0)
        return -1;
    
    if(n==0)
    {
        return 1;
    }

    return n*factorial(n-1);
}