#include<iostream>

using namespace std;

int getsum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int arr[5]; 
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout << "Enter index " << i << endl;
        cin >> arr[i];
    }

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
  
        cout << "Sum of array element is : " << getsum(arr,sizeof(arr)/sizeof(int));
       
 
    return 0;
}