#include<iostream>
using namespace std;

int arr[20];
int size = 5;
int front = -1;
int back = -1;

void enqueue(int value)
{
    if(back == size-1)
    {
        cout<<"\n\nQueue is Overflow\n\n";
        return;
    }

    back ++;
    arr[back] = value;
    cout<<"\n\nElement "<<value<<" is added to the queue\n\n";
    if(front == -1)
    {
        front++;
    }
}

void dequeue()
{
    if(front == -1 || front > back)
    {
        cout<<"\n\nQueue is Underflow\n\n";
        return;
    }
    cout<<"\n\ndelete element is "<<arr[front]<<"\n\n";

    front++;

    if(front > back)
    {
        back = -1;
        front = -1;
    }
}

int peek()
{
    if(front == -1 || front > back)
    {
        cout<<"\n\nQueue is Underflow\n\n";
    
    }
    // cout<<"\n\nFront element of Queue is "<<front<<"\n\n";
    return arr[front];

}

bool isEmpty()
{
    if(front == -1 && back == -1)
    {
        return true;
    }
    return false;
}

void display()
{
    if(back == -1)
    {
        cout<<"\n\nQueue is empty\n";
        return;
    }
    cout<<"\nQueue elements are:\n\n";
    for(int i = front; i<=back; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


int main()
{
    while(1)
    {
        cout<<"\n1-for enqueue\n";
        cout<<"2-for dequeue\n";
        cout<<"3-for peek\n";
        cout<<"4-for empty\n";
        cout<<"5-for display\n";
        cout<<"6-for Exit\n";

        int ch,ele; 
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: 
                cout<<"Enter element: ";
                cin>>ele;
                enqueue(ele);
                break;
            case 2:
                dequeue();
                break;
            case 3:
            
                cout<<"\nFront element is " << peek() << endl;
                break;
            case 4: 
                if(isEmpty())
                {
                    cout<<"\nQueue is empty\n";
                }
                cout<<"\nQueue is not empty\n";

            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                cout<<"\nInvalid choice\n";
        }
    }
}

