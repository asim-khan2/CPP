#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],rslt[3][3];
    cout<<"\tEnter first matrix:\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter vlaue first matrix index " <<i<<" "<<j<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"\tEnter second matrix\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter vlaue second matrix index " <<i<<" "<<j<<": ";
            cin>>b[i][j];
        }
    }

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < 3; k++) {
                rslt[i][j] += a[i][k] * b[k][j];
            }
 
            cout << rslt[i][j] << "\t";
        }
 
        cout << endl;
    }
    return 0;
}