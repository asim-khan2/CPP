#include<iostream>
using namespace std;
class Student 
{
    public:
    string name;
    double *cgpaPtr;

    Student(string name,  double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student()
    {
        cout<<"i am distructor i am delete heap memorey\n";
        delete cgpaPtr;
    }
    Student(const Student &s)
    {
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr = *(s.cgpaPtr);
    }
    
    void display()
    {
        cout<<"Name: "<<name<<"\ncgpa: "<<*cgpaPtr<<endl;
    }
};
int main()
{
    Student s1("Rahul", 8.5);
    s1.display();
    Student s2(s1);
    *s2.cgpaPtr = 9.4;
    s1.display();
    s2.display();
    return 0;
}