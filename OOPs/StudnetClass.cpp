#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        double *cgpaPtr;

    Student(string name, double cgpa)//perameterized cons.
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // custom copy cons.
    // shallow copy constructor
    Student(const Student &s)
    {
        cout<<"This is a shallow  copy constructor"<<endl;

        this->name = s.name;
        this->cgpaPtr = s.cgpaPtr;
    }
    Student(const Student &s)
    {
        cout<<"This is a deep  copy constructor"<<endl;

        this->name = s.name;
        cgpaPtr = new double;
        *cgpaPtr = *(s.cgpaPtr);
    }
    void display()
    {
        cout<<"Name: "<<name<<"\nCgpa: "<<*cgpaPtr<<endl;
    }
};

int main()
{
    Student s1("Asim",7.8);
    Student s2(s1);
    s2.display();
     // both change object s1 and object
     //  o2 this is the problem in shallow copy 
    // *(s2.cgpaPtr) = 9.2;
    s1.display();
    return 0;
}