#include<iostream>
using namespace std;
void display(int arr[], int n);
void selection_sort(int arr[], int n);
int main()
{
    int arr[20];
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter value at index "<<i<<" : ";
        cin>>arr[i];
    }
    display(arr,n);
    selection_sort(arr,n);
    cout<<"After sorting array is "<<endl;
    display(arr,n);
    return 0;
}
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void selection_sort(int arr[], int n)
{
    int temp = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}