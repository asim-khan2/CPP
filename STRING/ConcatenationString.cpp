#include<iostream>
using namespace std;

string concat(string fruit[], int n)
{
    string  res = "";
    for(int i=0; i<n; i++)
    {
        res += fruit[i];
    }
    return res;
}

void display(string fruit[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << fruit[i] << " ";
    }
    cout << endl;
}

void input(string fruit[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Enter string at " << i << " index: ";
        cin >> fruit[i];
    }

}

int main()
{
    string fruit[50];
    int n;
    cout << "Enter string size: ";
    cin >> n;

    while(1)
    {
        cout << "\n\t1 for input at string array: "; 
        cout << "\n\t2 for concatenation: "; 
        cout << "\n\t3 for display: "; 
        cout << "\n\t4 for exit: "; 
        int ch;
        cout << "Enter yout choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                input(fruit, n);
                break;
            case 2: 
                cout << "\nAfer concatenation of String is : " << concat(fruit, n);
                break;
            case 3:
                cout << "\nString Array Element are: \n";
                display(fruit, n);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice: ";
        }
    }
    return 0;
}