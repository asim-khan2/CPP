#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter row : ";
    cin>> n;
    char i = 'A';
    while(i<=n){
        char j = 'A';
        while(j<=n){
            cout << 'A'+i-1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}