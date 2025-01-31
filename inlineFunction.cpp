#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b;
    cout << "Enter the number first: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << a << " + " << b << " = " << add(a,b) << endl;
    return 0;
}