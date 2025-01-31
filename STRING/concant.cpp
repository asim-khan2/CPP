#include<iostream>
using namespace std;


int main()
{
    string fruit[3] = {"apple", "banana", "mango"};
    string sent = "";
    for(int i=0; i<3; i++)
    {
        sent += fruit[i];
    }
    cout << "concatenation of string : \n";
    cout << sent;
    return 0;
}