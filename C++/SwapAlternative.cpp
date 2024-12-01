#include<iostream>
using namespace std;



 void Swapalter(int arr[], int size){

    // loop for Swap alternative array 

    int temp;

    for(int i=0; i<size-1; i+=2)
    {
        temp = arr[i];

        arr[i] = arr[i+1];

        arr[i+1] = temp;
    }

 }

 void printarr(int arr[], int size){
    
    // loop for printing array 

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

}

int main(){

    int arr[10];
    cout << "Enter 10 element of array : " ; 
    for (int i=0; i<10; i++){
        cin >> arr[i];
    }

    cout << "Befor Swaping array is : " << endl;
    
    printarr(arr,10);

    Swapalter(arr, 10);

    cout << "After Swaping array is : " << endl;

    printarr(arr,10);

    return 0;
}