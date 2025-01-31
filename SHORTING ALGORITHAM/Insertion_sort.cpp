#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter array size: ";
    cin >> n;
    // for array input 
    for(int i=0; i<n; i++)
    {
        cout << "Enter value for at index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Befor Sort array is: " << endl;
    display(arr, n);
    insertionSort(arr, n);
    cout << "After Sort array is: " << endl;
    display(arr, n);


    return 0;
}
