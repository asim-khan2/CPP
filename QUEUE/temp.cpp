#include<iostream>
using namespace std;
#define size 5

int arr[100];
int front = -1;
int rear = -1;

void enqueue(int ele)
{
    if(rear == size-1)
    {
        cout<<"Queue is Overflow\n";
        return;
    }
    rear ++;
    arr[rear]  = ele;

    if(front == -1)
    {
        front++;
    }
}

int dequeue()
{
    if(front == -1)
    {
        // cout<<"\nQueue is Underflow\n";
        return -1;
    }

    int val = arr[front];

    front++;
    if(front > rear)
    {
        front = -1;
        rear = -1;
    }
    return val;
}

void display()
{
    if(front == -1)
    {
        cout<<"\nQueue is Empty\n";
        return;
    }
    cout<<"\t\t Queue element are \n";
    for(int i = front; i <= rear; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{

    while(1)
    {
        cout<<"\t1-for enqueue\n";
        cout<<"\t2-for dequeue\n";
        cout<<"\t3-for display\n";
        cout<<"\t4-for exit\n";

        int ch, val;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                enqueue(val);
                display();
                break;
             case 2:
            {
                int result = dequeue(); // Call dequeue() once and store the result
                if(result == -1)
                {
                    cout << "\tQueue is Empty\n";
                }
                else
                {
                    cout << "\nDeleted element is " << result << endl;
                }
                display();
                break;
            }
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout<<"\nInvalid choice\n";
        }
    
    }
}