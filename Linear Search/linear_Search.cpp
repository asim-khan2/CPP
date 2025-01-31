#include<iostream>
using namespace std;

int linear_Search(int arr[], int n, int item)
{
    for(int i=0; i<n; i++)
    {
        if(item == arr[i])
        {
            return i;
        }
    }
    return -1;
}
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void takeinput(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array element: ";
    takeinput(arr, n);
    display(arr, n);
    int item;
    cout<<"Enter element which you want to be search: ";
    cin>>item;
    int res = linear_Search(arr,n,item);
    if(res != -1)
    {
        cout<<item<<" element found at index : "<< res<<endl;
    }
    else{
        cout<<item <<" element not found: "<<endl;
    }
    return 0;
}