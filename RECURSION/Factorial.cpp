#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);

}


int main()
{
    cout << "Enter number for calculate factorial: ";
    int n;
    cin >> n;

    cout<<"Factorial of number " << n << " is " << factorial(n) << endl;

    return 0;
}