#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(12);
    q.push(45);
    q.push(23);


    cout<<"Queue front element is "<<q.front()<<endl;
    
    cout<<"Queue size is "<<q.size()<<endl;

    q.pop();
    cout<<"Queue front element is "<<q.front()<<endl;

    cout<<"Queue size is "<<q.size()<<endl;
    q.pop();
    cout<<"Queue front element is "<<q.front()<<endl;

    // q.pop();
    if(q.empty())
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Queue is not empty\n";
    }
    return 0;
}
