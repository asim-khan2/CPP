#include<iostream>
using namespace std;

void short_arr(int arr[], int n)
{
    int z = 0, o = 0, t = 0, th = 0;
    
    // Counting occurrences of 0, 1, 2, and 3
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            z++;
        }
        else if (arr[i] == 1)
        {
            o++;
        }
        else if (arr[i] == 2)
        {
            t++;
        }
        else if (arr[i] == 3)
        {
            th++;
        }
    }
    
    // Placing 0s in the array
    int index = 0;
    for (int i = 0; i < z; i++)
    {
        arr[index++] = 0;
    }
    
    // Placing 1s in the array
    for (int i = 0; i < o; i++)
    {
        arr[index++] = 1;
    }
    
    // Placing 2s in the array
    for (int i = 0; i < t; i++)
    {
        arr[index++] = 2;
    }
    
    // Placing 3s in the array
    for (int i = 0; i < th; i++)
    {
        arr[index++] = 3;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {2, 0, 1, 0, 3, 0, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    short_arr(arr, n);
    display(arr, n);
    return 0;
}
