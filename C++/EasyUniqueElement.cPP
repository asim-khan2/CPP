#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int unique = 0;
    for(int i=0; i<size; i++){
        unique = unique^arr[i];
    }
    return unique;
}

int main(){

    int arr[] = {1,1,2,5,5};
    cout << "Unique Element is " << findUnique(arr, 5) << endl;
    return 0;
}