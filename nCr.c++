#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denomi = factorial(r) * factorial(n-r);
    float ans = (float)num/denomi;

    return ans;
}

int main(){
    int n,r;
    cout << "Enter number for n : " << endl;
    cin >> n;
    cout << "Enter number for r : " << endl;
    cin >> r;
    cout << "The nCr is : " << nCr(n,r) << endl;
    return 0;
}