#include<iostream>
using namespace std;

// function to find binary search 
int binarySearch(int arr[], int n, int item)
{
    int lb = 0, hb = n-1;
    while(lb <= hb)
    {
        int mid = (lb + hb)/2;
        if(arr[mid]==item)
        {
            return mid;
        }
        else if(arr[mid<item])
        {
            lb = mid+1;
        }
        else
        {
            hb = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int n,item;
    cout<<"Enter the number of element of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }    
    cout<<"Enter the element to be search: ";
    cin>>item;
    int result = binarySearch(arr, n, item);
    if(result == -1)
    {
        cout<<"Element is not present in array";
    }
    else
    {
        cout<<"Elenent found  at index "<<result<<endl;
        cout<<"Element found at position:  "<<result+1;


    }

    return 0;
}