#include <iostream>  
using namespace std;  

int search(int arr[], int key, int n )
{
	for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<arr[i];
            return i;
        }
    }
}

int main() {  
    int n,key;
	cout<<"Enter the size of an array : "<<endl;
	cin>>n;
	
	int arr[1000];
	cout<<"Enter the element you want :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"Enter the value of key :"<<endl;
	cin>>key;
	// int result = search(arr, key, n);
	cout<<"the element present at "<<search(arr,key,n)<<endl;   
    return 0;  
}