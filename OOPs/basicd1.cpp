#include<iostream>
using namespace std;

class Teacher
{
    private:
        double salary;
    public:
        string name;
        string department;
        string subject;

        //Default constructor or non-peramitrized constructor
        Teacher()
        {
            cout<<"Defaul Constructo called \n";
        }
        //perameterized constructor
        Teacher(string name,string d,string s,double sal)
        {
            //use this -> indecate this name is object name not con. variable
            this->name = name;
            this->department = d;
            this->subject = s;
            this->salary = sal;
        }

        //custom copy constructor
        Teacher(const Teacher &t)
        {
            this->name = t.name;
            this->department = t.department;
            this->subject = t.subject;
            this->salary = t.salary;
        }

        void display()
        {
            cout<<"Name: "<<name<<"\nDepartment "<<department<<"\nSubject "<<subject<<endl;
        }
        // setter
        void set_salary(double s)
        {
            salary = s;
        }
        // getter
        double get_salary(){
            return salary;
        }
};

int main()
{
    Teacher t1("Asim","Computer Science","C++",34000);
    // t1.name = "Asim";
    // t1.department = "Computer  Science";
    // t1.subject = "Data Structer";
 
    Teacher t2(t1);// copy or default copy constructor called

    t1.display();
    cout<<"This is object 2 output: \n";
    t2.display();
    // t1.set_salary(40000);
    // cout<<"Salary: "<<t1.get_salary();

    return 0;
}