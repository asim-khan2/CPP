#include <iostream>
using namespace std;

#define MAX 5   // Define maximum size of the stack

int stack[MAX]; // Array to hold the stack elements
int top = -1;   // Variable to track the top of the stack

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl; // Stack is full
    } else {
        top++;            // Increment the top index
        stack[top] = value; // Add the value to the stack
        cout << value << " pushed to stack." << endl;
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl; // Stack is empty
    } else {
        cout << stack[top] << " popped from stack." << endl;
        top--; // Decrement the top index
    }
}

// Function to get the top element of the stack (peek)
int peek() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return -1;
    } else {
        return stack[top];
    }
}

// Function to display the stack elements
void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

// Function to check if the stack is empty
bool isEmpty() {
    return (top == -1);
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50); // Stack will be full after this
    push(60); // This will cause Stack Overflow

    display();

    pop();
    pop();

    display();

    cout << "Top element is: " << peek() << endl;

    return 0;
}
