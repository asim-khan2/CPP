#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        double cgpa;


 Student(string name, double  cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    // Student(string name, double  cgpa)
    // {
    //     this->name = name;
    //     *cgpaPtr = cgpa;
    // }

    // shallow copy examle
    // Student(const Student &s)
    // {
    //     this->name = name;
    //     cgpaPtr = new double;
    //     cgpaPtr = s.cgpaPtr;
    // }


    void display()
    {
     cout<<"name: "<<name<<"\nCgpa: "<<cgpa;
    }
};

int main()
{
    Student s1("Asim",7.6);
    s1.display();
    Student s2(s1);
    s2.display();
    // // s1.display();-

    return 0;
}