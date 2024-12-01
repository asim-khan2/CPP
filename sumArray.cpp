#include<iostream>
using namespace std;

void display(int arr[], int n);
void sum(int arr[], int n);

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter array element at index "<<i<<" ";
        cin>>arr[i];
    }
    display(arr,n);
    sum(arr,n);
    display(arr,n);
    return 0;
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sum(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        arr[i+1] = arr[i]+arr[i+1]; 
    }
}