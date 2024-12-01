#include<iostream>
using namespace std;
// function declearation
void fibbo(int n);
int main()
{
    int n;
    cout<< "Enter range for print fibbonacci series :  "<<endl;
    cin>>n;
    // function call 
    fibbo(n);

}
// function defination 
void fibbo(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i<= n-2; i++){
        int c = a + b; 
        cout << c << " ";
        a = b;
        b = c;
    }
}
