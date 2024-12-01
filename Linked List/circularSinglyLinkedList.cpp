#include<iostream>
using namespace std;

//  CIRCULAR LINKED LIST

class Node
{
    public:
        int data;
        Node* next;

        //constructor
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
};
void insert_at_start(Node* &head, int value)
{
    Node *new_node = new Node(value);
    // if linked list is empty
    if(head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head = new_node;
}

int lengthOfLinkedList(Node* head)
{
    Node* temp = head;
    int count = 1;
    while(temp->next != head)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void insert_at_last(Node* &head, int value)
{
    Node *new_node = new Node(value);
    // if linked list is empty
    if(head == NULL)
    {
        insert_at_start(head,value);
        return;
    }
    Node *temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}

void insert_at_position(Node* &head, int value, int position)
{
    Node *new_node = new Node(value);
    // if position is 1 mean insert at first  position( insert at  start)
    if(position == 1)
    {
        insert_at_start(head, value);
        return;
    }

    //  if position is equal to length of linked list
    //  then insert at last position
    if(position == lengthOfLinkedList(head)+1)
    {
        insert_at_last(head, value);
        return;
    }
    if(position < 0  || position > lengthOfLinkedList(head)+1)
    {
        cout<<"Invalie Position\n";
        delete new_node;
        return;
    }

    Node *temp = head;
    int count = 1;
    while(temp->next != head && count < position-1)
    {
        temp = temp->next;
        count++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void delete_at_start(Node* &head)
{

    if(head == NULL)
    {
        cout<<"list is empty\n";
        return;
    }
    if(head == head->next)// if present single node in a linked list
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    head  = temp->next;

    // after delete node from start and update last  node to point to head
    Node *last = temp;
    while(last->next != temp)
    {
        last = last->next;
    }
    last->next = head;
    delete temp;
}

void delete_at_last(Node* &head)
{
    // list is empty
    if(head == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    // present only one node
    if(head->next == head)
    {
        delete_at_start(head);
        return;
    }
    // present more than  one node
    Node *temp = head;
    Node *second_last = head;
    while(temp->next != head)
    {
        second_last = temp;
        temp = temp->next;
    }
    second_last->next = head;// or second last->next = temp->next
    delete temp;

}

void delete_at_position(Node* &head, int position)
{
    // if list is empty
    if(head == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    // position is 1 delet first node
    if(position == 1)
    {
        delete_at_start(head);
        return;
    }
    int len = lengthOfLinkedList(head);
    if(position <= 0 || position > len)
    {
        cout<<"Invalid position\n";
        return;
    }
    Node* temp = head;
    Node* befor_posiNode = head;
    int i = 1;
    while(i < position)
    {
        befor_posiNode = temp;
        temp = temp->next;
        i++;
    }
    befor_posiNode->next = temp->next;
    delete temp;
}

void display(Node *head)
{
    // if list is empty
    if(head == NULL)
    {
        cout<<"List is empty\n";
    }
    
    Node *temp = head;
    do
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    while(temp != head);
    cout<<"HEAD\n";
}
int main()
{
    Node *head = NULL;
    while(1)
    {
        cout<<"\t1-for insert at start\n";
        cout<<"\t2-for insert at last\n";
        cout<<"\t3-for insert at position\n";
        cout<<"\t4-for dispaly\n";
        cout<<"\t5-for delete at start\n";
        cout<<"\t6-for delete at last\n";
        cout<<"\t7-for delete at position\n";
        cout<<"\t9-for length of linked list\n";
        cout<<"\t10-for exit\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        int value,pos;
        switch(ch)
        {
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_start(head,value);
                break;

            case 2:
                cout<<"Enter value: ";
                cin>>value;
                insert_at_last(head, value);
                break;

            case 3:
                cout<<"Enter value: ";
                cin>>value;
                cout<<"Enter position: ";
                cin>>pos;
                insert_at_position(head,value, pos);
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
                delete_at_position(head, pos);
                break;

            case 9:
                cout<<"Length of linked list is: "<<lengthOfLinkedList(head)<<endl;
                break;

            case 10:
                exit(0);

            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}