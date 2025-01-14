#include<iostream>
using namespace std;

void printNum(int n);

int main()
{
    int n;
    cout<<"Enter number for printing : ";
    cin>>n;
    printNum(n);
    return 0;
}
void printNum(int n)
{
    if(n == 0)
    {
        return;
    }
    cout<<n<<" ";
    printNum(n-1);
    return;
}