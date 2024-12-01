#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s; // Stack creation 

    // push opretions
    s.push(2);
    s.push(3);

    // remove element using pop function
    s.pop();

    
    // again insert by using pop function
    s.push(5);

    cout << "Top element is " << s.top() << endl;  // printing top element using top function 

    cout << "Stack size is : " << s.size() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
