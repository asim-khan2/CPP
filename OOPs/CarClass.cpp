#include<iostream>
using namespace std;

class Car // car is a new deta type OR class 
{
    public: // access modifier

        string name; // properties or attirbutes
        int price;
        int seates;
        string type;
};

// function for printing object
void print(Car c){
    cout << c.name << " " << c.price<< " "<< c.seates<< " "<<c.type<<endl;
}

// change in object veriable 
void change (Car &c){
    c.name = "Audi A8";
}

int main(){
    Car c1;
    c1.name = "Creata";
    c1.price = 343222;
    c1.seates = 4;
    c1.type = "SUV";

    // cout << c1.name << " " << c1.price << " " << c1.seates << " " << c1.type << endl;
    print(c1);
    change(c1);
    print(c1);

    return 0;
}