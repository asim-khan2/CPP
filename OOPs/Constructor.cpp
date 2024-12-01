#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
    float gpa;

    // parameterized constructor 
    Student(string s, int r, float g){
        name = s;
        roll_no = r;
        gpa = g;
    }

};

class Car{

    public:
    int price;
    string name;
    int seates;
    string type;

    // perameterized constructor
    Car(int p, string n, int s, string t){
        price = p;
        name = n;
        seates = s;
        type = t;
    }
};

// print function 
void print(Student s){
    cout<<s.name<<" "<<s.roll_no<<" "<<s.gpa<<endl;
}

// Print car object
void Cprint(Car c){
    cout<<c.price<<" "<<c.name<<" "<<c.seates<<" "<<c.type<<endl;
}

int main()
{
    Student s1("Asim Khan", 223, 8.3);
    Student s2("Danish", 45, 5.7);

    print(s1);//function call


    Car c1(340000,"TOYOTA",5,"SUV");
    Car c2(345000,"MARUTI",4,"SUV");

    Cprint(c1);
    Cprint(c2);
    return 0;
}