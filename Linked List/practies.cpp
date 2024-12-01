#include<iostream>
using namespace std;

class Node
{
    public:

        int data;
        Node *next;

        Node(int data)
        {
            this->data = data;
            next = NULL;
        }

    
};

void insert_at_start(Node * &head, int value)
{
    Node *new_node = new Node(value);
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}

void insert_at_last(Node* &head, int value)
{
    Node *new_node = new Node(value);

    Node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

void insert_at_position(Node* &head, int value, int pos)
{
    Node *new_node = new Node(value);
    if(pos == 1)
    {
        insert_at_start(head, value);
        return;
    }

    Node *temp = head;
    int count = 1;
    while(temp->next != NULL && count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL)
    {
        cout<<"\n\tINVALID POSITION\n";
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    
}

void display(Node* &head)
{
    if(head == NULL)
    {
        cout<<"\n\tLINKED LIST UNDERFLOW\n";
        return;
    }
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node *head  = NULL;
    while(1)
    {
        cout<<"\n\t1-for insert at start\n";
        cout<<"\n\t2-for insert at position\n";
        cout<<"\n\t3-for insert at last\n";
        cout<<"\n\t4-for display\n";
        int ch;
        cout<<"Enter choice: ";
        cin>>ch;
        int val, pos;
        switch(ch)
        {
            case 1: 
                cout<<"Enter value: ";
                cin>>val;
                insert_at_start(head, val);
                break;
            case 2:
                cout<<"Enter value: ";
                cin>>val;
                cout<<"Enter positon: ";
                cin>>pos;
                insert_at_position(head, val, pos);
                break;
            case 3:
                cout<<"Enter value: ";
                cin>>val;
                insert_at_last(head, val);
                break;
            case 4:
                display(head);
                break;
            default:
                cout<<"\tInvalid position\n";
        }
    }
    return 0;
}