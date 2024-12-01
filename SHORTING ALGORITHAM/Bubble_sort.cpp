#include<iostream>
using namespace std;
void print_array(int  arr[], int n);
void Bubble_sort(int arr[], int n);

int main()
{
    int arr[20];
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    // array input
    for(int i=0; i<n; i++)
    {
        cout<<"Enter value at index "<<i<<" : ";
        cin>>arr[i];
    }
    print_array(arr,n);
    Bubble_sort(arr,n);
    cout<<"After sorting  array is : "<<endl;
    print_array(arr,n);
    return 0;
}
void print_array(int  arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void  Bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool iswap = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                iswap = true;
            }
        }
        if(!iswap)
            {
                return;
            }
    }
}
