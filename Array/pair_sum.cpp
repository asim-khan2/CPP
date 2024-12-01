#include<iostream>
using namespace std;
int pairOfSum(int arr[], int n, int target);
void display(int arr[], int n);

int main()
{
    int arr[20];
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    // array input 
    cout<<"Enter array element:"<<endl;
    for(int i=0; i<n; i++)
    {
        ;
        cin>>arr[i];
    }
    display(arr,n);
    int target;
    cout<<"Enter targert: ";
    cin>>target;
    if (pairOfSum(arr, n, target) == -1) 
    {
        cout << "No pairs found with the target sum." << endl;
    }
    return 0;
}
int pairOfSum(int arr[], int n, int target)
{
    bool found = false;
    for(int i=0; i<n-1; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"Pair found at index "<<i<<" & "<<j<<" with sum "<<target;
                found = true;
            }
        }
    }
    cout<<endl;
    if(!found){
        return -1;
    }
    
}
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}