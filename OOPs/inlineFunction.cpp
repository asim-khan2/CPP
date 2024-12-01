#include<iostream>
using namespace std;
 inline int sum(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter a and b number for Calculate sum: ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
    return 0;
}
inline int sum(int a,int b)
{
    return a+b;
}