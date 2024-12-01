#include<iostream>
using namespace std;

// CIRCULAR DOUBLY LINKED LIST
class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

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
    // list is empty
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        new_node->next = new_node;
        new_node->prev = new_node;
        return;
    }

    new_node->next = head->prev;
    head->prev = new_node;
    new_node->next = head;
    tail->next  = new_node;
    head = new_node;
}

void insert_at_last(Node* &head, Node* &tail, int value)
{
    Node* new_node = new Node(value);
    // list is empty
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        new_node->next = new_node;
        new_node->prev = new_node;
        return;
    }
    new_node->next = tail->next;
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;

}

int length(Node* head)
{
    if(head == NULL)
    {
        cout<<"List is empty\n";
        return 0;
    }
    int count = 1;
    Node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insert_at_position(Node* &head, Node* & tail, int value, int pos)
{
    Node* new_node = new Node(value);

    int len = length(head);
    if(pos <= 0 || pos > len+1)
    {
        cout<<"Invalid position\n";
        return;
    }
    // position is one mean insert at start
    if(pos == 1)
    {
        insert_at_start(head, tail, value);
        return;
    }
    if(pos  == len+1)
    {
        insert_at_last(head, tail, value);
        return;
    }
    Node* temp = head;
    int i = 1;
    while(i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next->prev = new_node;
    temp->next = new_node;

}

void delete_at_start(Node* &head, Node* &tail)
{
    // list is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    // single node in the list
    if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    // more than one  node in the list
    Node* temp = head;
    head->next->prev = head->prev;
    tail->next = head->next;
    head = head->next;
    delete temp;
}

void delete_at_last(Node* &head, Node* &tail)
{
    // list is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"list is empty\n";
        return;
    }
    // if  list has only one node
    if(head == tail)
    {
        delete tail;
        head = NULL;
        tail = NULL;
        return;
    }
    // if list have more than node
    Node* temp = tail;
    tail->prev->next = tail->next;
    tail = tail->prev;
    head->prev = tail;
    delete temp; 

}

void delete_at_position(Node* &head, Node* &tail, int pos)
{
    //  list is empty
    if(head == NULL && tail == NULL)
    {
        cout<<"list is empty\n";
        return;
    }
    int len = length(head);
    if(pos <= 0 ||  pos > len)
    {
        cout<<"invalid position\n";
        return;
    }

    if(pos == 1)// insert at  first position (delet at start)
    {
        delete_at_start(head, tail);
        return;
    }
    
    if(pos == len)// delete at last
    {
        delete_at_last(head, tail);
        return;
    }
    Node* temp = head;
    int i = 1;
    while(i < pos-1)
    {
        temp =  temp->next;
        i++;
    }

    Node* delete_node = temp->next;
    temp->next = delete_node->next;
    delete_node->next->prev = temp;

    delete delete_node;  

}

void display(Node* &head, Node* &tail)
{
    if(head == NULL &&  tail == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    cout<<"Head -> ";
    Node* temp = head;
    do
    {
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    while(temp != head);
    cout<<"Tail\n";

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(1)
    {
        cout<<"\t1-for insert at start\n";
        cout<<"\t2-for insert at last\n";
        cout<<"\t3-for insert at position\n";
        cout<<"\t4-for display\n";
        cout<<"\t5-for delete at start\n";
        cout<<"\t6-for delete at last\n";
        cout<<"\t7-for delete at position\n";
        cout<<"\t10-for length of linked list\n";
        cout<<"\t9-for exit\n";
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
                cout<<"Enter Position: ";
                cin>>pos;
                cout<<"Enter value: ";
                cin>>value;
                insert_at_position(head, tail, value, pos);
                break;

            case 4:
                display(head, tail);
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

            case 9:
                return 0;

            case 10:
                cout<<"Length of linked list is "<<length(head)<<endl;
                break; 

            default: 
                cout<<"Invalid position\n";
                
        }
    }

    return 0;
}