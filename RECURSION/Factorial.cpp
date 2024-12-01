#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
    // step by step calculation for recursion function
    // factorial(4) = 4 * factorial(3)
    // factorial(4) = 4 * 3 *factorial(2)
    // factorial(4) = 4 * 3 * 2 * 1
}

int main()
{
    cout << "Enter number for calculate factorial: ";
    int n;
    cin >> n;

    cout<<"Factorial of number " << n << " is " << factorial(n) << endl;

    return 0;
}