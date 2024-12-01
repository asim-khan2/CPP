#include<iostream>
using namespace std;

int main()
{
    int n,n1;
    cout<<"Enter row:  ";
    cin>>n;
    cout<<"Enter colunm: ";
    cin>>n1;

    int arr[n][n1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n1; j++)
        {
            cout<<"Enter element at index: ["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    // for display array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}