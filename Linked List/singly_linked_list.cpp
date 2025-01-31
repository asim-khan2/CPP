#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;

}

void insert_at_end(Node *&head, int value)
{
    Node *new_node = new Node(value);
    if(head==NULL)
    {
        head = new_node;
    }
    else 
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_at_position(Node *&head, int value, int position)
{
    Node *new_node = new Node(value);
    if(position == 1)
    {
        insert_at_head(head, value);
        return;
    }
    Node *temp = head;
    int  count = 1;
    while(temp != NULL && count < position-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        cout<<"Invalid position"<<endl;
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void delete_at_start(Node * &head)
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    Node * temp = head;
    head = head->next;
    delete temp;
}

void delete_at_last(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is  empty"<<endl;
        return;
    }
    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        cout<<"the last node is delete list is empty now\n";
        return;
    }
    Node *temp = head;    
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void delete_at_position(Node*& head, int position) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (position == 1) {
        // Deleting the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* node_to_delete = temp->next;
    temp->next = temp->next->next;
    delete node_to_delete;
    cout << "Node at position " << position << " deleted." << endl;
}


Node* reverseList(Node* head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* nextnode = head;

    while(nextnode != NULL)
    {
        nextnode = nextnode -> next;
        current -> next = prev;
        prev = current;
        current = nextnode;
    }
    return prev;
}

void display(Node *head)
{
    Node *temp = head;
    if(temp==NULL)
    {
        cout<<"List is empty: "<<endl;
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}


int main()
{
    Node *head = NULL;
    
    while(1)
    {
        cout<<"\t1-for insert at head\n";
        cout<<"\t2-for insert at last\n";
        cout<<"\t3-for insert at specific position\n";
        cout<<"\t4-for display list\n";
        cout<<"\t5-for delete at begning\n";
        cout<<"\t6-for delete at last\n";
        cout<<"\t7-for delete at position\n";
        cout<<"\t8-for reverse linked list\n";
        cout<<"\t9-for EXIT Program\n";
        int ch;
        cout<<"\n\t Enter your choice: ";
        cin>>ch;
        int value,pos;

        switch(ch)
        {
            
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_head(head,value);
                break;
            case 2:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_end(head,value);
                break;
            case 3:
                cout<<"Enter value: ";
                cin>>value;
                cout<<"Enter position: ";
                cin>>pos;
                insert_at_position(head,value,pos);
                break;
            case 4:
                display(head);
                break;
            case 5:
                delete_at_start(head);
                break;
            case 6:
                delete_at_last(head);
                break;
            case 7:
                cout<<"Enter position: ";
                cin>>pos;
                delete_at_position(head,pos);
                break;
            case 8:
                head = reverseList(head);
                break;
            case 9:
                exit(0);
            default:
                cout<<"Please Enter valid choice\n";
        }
    }

    return 0;
}