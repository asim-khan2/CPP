#include<iostream>
using namespace std;
int main (){
    int row;
    cout << "Enter rows : ";
    cin>>row;
    int i=1;
    while(i<=row){
        int j=1;
        while(j<=i){
            cout << " "<< i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}