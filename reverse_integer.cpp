#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    int result = 0;
    while (n>0) 
    {
        int reminder = n%10;
        result = result*10+reminder;
        n = n/10;
    }
    cout<<"Reverse of the number is "<<result<< endl;
    
    return 0;
}