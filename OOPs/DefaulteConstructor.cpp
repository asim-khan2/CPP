#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int roll_number;
    
    void getdata(){
        // cout<<"Enter name: ";
        // cin>>name;
        // cout<<"Enter age: ";
        // cin>>age;
        // cout<<"Enter roll number: ";
        // cin>>roll_number;

        name = "Aism";
        age = 20;
        roll_number = 1;
        }

        // defaulte constructor
        Student(){
            cout<<"Default constructor called"<<endl;
            }

            // prit function this function called member fun.
        void display(){
            cout<<name<<" "<<age<<" "<<roll_number<<endl;


        }

            // parameterized constructor
        Student(string n,int a){
                name=n;
                age=a;
                }

        Student(string n,int a,int r){ //  parameterized constructor
                name = n;
                age = a;
                roll_number = r;
        }

        Student (int r){ //  parameterized constructor
            roll_number = r;
        }

        Student(int a,int r,string n){ //this constructor not same  as previous one constructor

                name = n;
                age = a;
                roll_number = r;
        }

};

int main()
{
    Student  s1;
    s1.getdata();
    s1.display();

    Student s2("Rahul",20);
    s2.age = 40; // over ride constructor 
    s2.roll_number =  10;
    s2.display();

    Student s3("Vivek",34,2);
    s3.display();

    Student s4(12);
    s4.name = "Taniya";
    s4.age = 18;
    s4.display();

    Student s5(23,6,"Nida");
    s5.display();
    return 0;
}