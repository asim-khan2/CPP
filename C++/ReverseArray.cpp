#include<iostream>

using namespace std;

void getreverse(int arr[], int size){

    // loop for reverse array
    
    for(int i=0; i<=size/2; i++)
    {   
        int temp = arr[i];
    
        arr[i] = arr[size-i-1];

        arr[size-i-1] = temp;
    }

    // loop for printing array 

    for (int i=0; i<size; i++){

        cout << arr[i] << "\t";
    }
}

int main(){

    int arr[10];

    // for loop for taking input 

    cout << "Enter " << 10 << " number  array : " << endl;

     for (int i=0; i<10; i++){
        
        cin >> arr[i];
     }

    // actual array befor revesing 

    cout << "actual array is " << endl;

     for (int i=0; i<10; i++){

        cout << arr[i] << "\t";
    }

    cout << endl;

     cout << "Reverse array is " << endl;

     // function call for revese array 

     getreverse(arr,10);

    return 0;
}
