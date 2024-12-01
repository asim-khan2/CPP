#include<iostream>

using namespace std;

int getMax(int arr[], int size)
{
    int maxi = arr[0];

    for(int i=1; i<size; i++)
    {   
        maxi = max(maxi,arr[i]);
        
        // if(arr[i]>max){

        //     max = arr[i];
        // }
    }

    return maxi;

}

int getMin(int arr[], int size)
{
    int mini = arr[0];

    for(int i=1; i<size; i++)
    {
        mini = min(mini, arr[i]);

        // if(arr[i]<mini){

        //     mini = arr[i];
        // }
    }

    return mini;

}

int main()
{
    int arr[10];

    // int s = sizeof(arr)/sizeof(int);
    // cout<<s;

    for (int i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout << "Enter index " << i << endl;
        cin >> arr[i];

    }

    // int max = maximum_array(arr,sizeof(arr)/sizeof(int));

    // cout << "maximum element is : " << max << endl;

    cout << "maximum element is : " << getMax(arr,sizeof(arr)/sizeof(int)) << endl;

    // int mini = minimum_array(arr,sizeof(arr)/sizeof(int));

    // cout << "minimum element is : " << mini << endl;

    cout << "minimum element is : " << getMin(arr,sizeof(arr)/sizeof(int)) << endl;


    return 0;
}