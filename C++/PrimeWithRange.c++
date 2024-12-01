#include<iostream>

using namespace std;

int isPrime(int n){
    
    if(n==1)
    {
        return 0;
    }

    if(n==0)
    
        return 0;
    
    if(n==2)
    
        return 1;
    
    for(int i=2; i<=n; i++)
    {
        
        if( n%2 == 0)
        {

            return 0;
        }
    }

    return 1;
}

 void printPrime(int num1, int num2)
 {
    for(int i=num1; i<=num2; i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";
        }
    }
 }

int main()
{
    int num1, num2;

    cout << "Enter number you want printing prime number : " << endl;

    cin >> num1;

    cout << "Enter number you want print upto prime number : " << endl;

    cin >> num2;

    printPrime(num1,num2);

    return 0;
}