// Doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data)
        {
            this->data = data;
            next = NULL;
            prev = NULL;
        }
};

void insert_at_start(Node* &head, Node* &tail, int value)
{
    Node* new_node = new Node(value);

    if(head == NULL && tail == NULL)
    {
        head = new_node;
        tail = new_node;
    return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_last(Node* &head,Node* &tail, int value)
{
    Node* new_node = new Node(value);

    if(tail == NULL && head == NULL)
    {
        insert_at_start(head,tail,value);
        // head = new_node;
        // tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

int length(Node* &head)
{
    Node *temp = head;
    int count = 1;
    while(temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_at_position(Node* &head, Node* &tail, int value, int pos)
{
    Node* new_node = new Node(value);
    // if position = 1, insert at the first position
    if(pos == 1)
    {
        insert_at_start(head, tail, value);
        return;
    }
    int len = length(head);
    if(pos <= 0 ||  pos > len+1)
    {
        cout<<"Invalid position\n";
        delete new_node;
        return;
    }

    if(pos == len+1)
    {
        insert_at_last(head, tail, value);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next->prev = new_node;
    temp->next = new_node;

}



void delete_at_start(Node* &head, Node* &tail)
{
    if(head == NULL && tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }

    // if present single node
    if(head->next == NULL && tail->prev == NULL) 
    {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    Node * temp = head;
    head = temp->next;
    head->prev = NULL;
    delete temp;
}

void delete_at_last(Node* &head, Node* &tail)
{
    // list is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }

    //if present single Node
    if(head == tail) 
    {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}

void delete_at_position(Node* &head, Node* &tail, int position)
{
    //if list is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    // if in the list present only single node
    if(head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    
    Node *temp = head;
    int count = 1;

    while(temp != NULL && count < position)
    {
        temp  = temp->next;
        count++;
    }
    // temp = null mean position not exist in the list
    if(temp == NULL)
    {
        cout<<"Invalid position\n";
        return;
    }
    // position is one mean delete first node
    if(position == 1)
    {
        delete_at_start(head,tail);
        return;
    }
    // if temp->next == null mean last node
    if(temp->next == NULL)
    {
        delete_at_last(head,tail);
        return;
    }
    // Node is in the middle of the list
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp; 
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST IS EMPTY\n";
        return;
    }

    Node* temp = head;
    cout<<"NULL <- ";

    while(temp != NULL)
    {
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    
    cout<<"NULL\n";
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1)
    {
        cout<<"\t1-for insert at start\n";
        cout<<"\t2-for insert at last\n";
        cout<<"\t3-for insert at position\n";
        cout<<"\t4-for display\n";
        cout<<"\t5-for delete at start\n";
        cout<<"\t6-for delete at last\n";
        cout<<"\t7-for delete at position\n";
        cout<<"\t8-for length of linked list\n";
        cout<<"\t9-for exit \n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        int value, pos;

        switch(ch)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_start(head, tail, value);
                break;

            case 2:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_last(head, tail, value);
                break;

            case 3:
                cout<<"Enter position: ";
                cin>>pos;
                cout<<"Enter value: ";
                cin>>value;
                insert_at_position(head, tail, value, pos);
                break;

            case 4:
                display(head);
                break;

            case 5:
                delete_at_start(head, tail);
                break;

            case 6:
                delete_at_last(head, tail);
                break;

            case 7:
                cout<<"Enter position: ";
                cin>>pos;
                delete_at_position(head, tail, pos);
                break;

            case 8:
                cout<<"Length of linked list: "<<length(head)<<endl;
                break;
                
            case 9:
                exit(0);

            default:
                cout<<"Invalid choice\n";
        }

    }  
    return 0;
}