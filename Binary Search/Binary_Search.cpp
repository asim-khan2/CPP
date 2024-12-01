#include<iostream>
using namespace std;

int  binary_search(int arr[], int size, int item)
{
    int lb = 0, hb = size-1;
    while(lb <= hb)
    {
        int mid = (lb +hb)/2;
        if(item == arr[mid])
        {
            return mid;
        }
        if(item < arr[mid])
        {
            hb = mid-1;
        }
        if(item > arr[mid])
        {
            lb = mid +1;
        }
    }
    return -1;
}

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int n ; 
    cout<<"Enter size of array: ";
    cin >> n;
    cout<<"Enter array element: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    display(arr, n);

    int item;
    cout<<"Enter element for searching from array: ";
    cin>>item;
    int result = binary_search(arr, n, item);

    if(result != -1)
    {
        cout<<item<<" Element found at index : "<<result<<endl;
    }
    else{
        cout<<item<<" Not found in array: "<<endl;
    }
    return 0;
}