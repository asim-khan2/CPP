#include<iostream>
using namespace std;

class Student // Student is a new deta type 
{
    public:

        string name; // properties or attirbutes
        int roll_no;
        float gpa;

};


// main function 
int main(){
    Student s1; // class object 1
    s1.name = "Asim";
    // s1.roll_no = 12;

    cout << "Enter roll No." << endl;
    cin>>s1.roll_no; // taking input 
    s1.gpa = 8.3;


    Student s2; // class object 2
    s2.name = "Rahul";
    s2.roll_no = 13;
    s2.gpa = 7.3;

    // printintg
    cout << s1.name << " " << s1.roll_no << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.roll_no << " " << s2.gpa << endl;
    return 0;
}