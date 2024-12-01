#include<iostream>
using namespace std;

int hillPattren(int row, int start, int increase)
{
    int sum=0;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<start<<" ";
            sum = sum+start;
            start = start+increase;
        }
        cout<<endl;
    }
    return sum;
}

int main()
{
    int row,start,increase;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter number for starting printing pattern: ";
    cin>>start;
    cout<<"Enter number for increase strating number: ";
    cin>>increase;
    cout<<"Sum of hill Pattren is: "<<hillPattren(row,start,increase);
    return 0;
}