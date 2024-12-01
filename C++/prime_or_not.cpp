#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number for check prime or not : ";
    cin>>n;
    bool isprime = 1;
    for(int i=2; i<n; i++){
        if(n%i==0){
           isprime = 0;
           break;
        }
    }
    if(isprime==1){
        cout << n << " number is  prime "<< endl;

    }else{
        cout << n << " number is not prime"<< endl;
    }
    // cout <<temp;
}