#include<iostream>

using namespace std;

bool Search(int arr[], int size, int search)
{
    for(int i=0; i<size; i++){

        if(arr[i]==search){

            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10];

    // loop for taking input 
    for (int i=0; i<10; i++){
        cout << "Enter index " << i << " : ";
        cin >> arr[i]; 
    }

    // Taking input Searching number 
    int search;
    cout << "Enter number for searching : " << endl;
    cin >> search;

    bool temp = Search(arr, 10, search);

    if(temp){
        cout << search << " number present in array " << endl;
    }
    else{
        cout << search << " number not present in array " << endl;
    }
    return 0;
}