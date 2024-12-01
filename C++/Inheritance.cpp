#include<iostream>
using namespace std;
class Perent{
    public:
    string name;
    int age;
    Perent(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
};
class Student : public Perent{
    public:
    int roll;
    Student(string name,int age, int roll) : Perent(name, age)
    {
       this->roll=roll;
    }
    void display()
    {
        cout<<"name: "<<name<<"\nage: "<<age<<"\nroll: "<<roll<<endl;
    }
};
int main()
{
    Student s1("Asim",22,45);
    // s1.name="Asim";
    // s1.age=22;
    // s1.roll=45;
    s1.display();
    return 0;
}