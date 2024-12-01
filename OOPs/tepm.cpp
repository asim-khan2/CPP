#include <iostream>
using namespace std;

class Person { // Correcting the class name to follow standard naming conventions
private:
    string name;
    int id;

public:
    // Constructor to initialize default values or print a message
    Person() {
        cout << "Default Constructor Called" << endl;
    }

    // Member function to set details
    void getDetails(string n, int i) {
        name = n;
        id = i;
    }

    // Member function to display details
    void display() {
        cout << "Name: " << name << "\nId: " << id << endl;
    }
};

int main() {
    Person p1; // p1 is an object of the Person class
    p1.getDetails("Asim", 123); // Setting details for p1
    p1.display(); // Displaying the details

   
    // cout << p1.name << "\n" << p1.id << endl;

    return 0;
}
