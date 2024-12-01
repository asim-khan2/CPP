#include<iostream>
using namespace std;

void reverse_arr(int arr[], int n)
{
    int temp=0;
    for(int i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout<<endl;
}

void insert_at_beg(int arr[], int &n)  // Pass n by reference to update size
{
    int ele;
    cout<<"Enter Element: "<<endl;
    cin>>ele;
   
    // Shift elements one step to the right
    for(int i=n;  i>0; i--)
    {
        arr[i] = arr[i-1];  // Shift elements from right to left
    }
    arr[0] = ele;  // Insert element at the beginning
    n++;  // Increment array size
}


 void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    cout<<"Enter array element: ";
    // loop for taking input array:

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    while(1)
    {
        int ch;
        cout<<"Enter  your choice: \n";
        cout<<"1. Display array"<<endl;
        cout<<"2. Reverse array"<<endl;
        cout<<"3. insert element at begning"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                display(arr, n);
                break;
            case 2:
                reverse_arr(arr, n);
                break;
            case 3:
                insert_at_beg(arr,n);
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }

    }
   
    return 0;
}