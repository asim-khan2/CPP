#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insert_at_start(Node* &head, int value)
{
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insert_at_last(Node* &head, int value)
{
    Node* new_node = new Node(value);
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void insert_at_position(Node* &head, int value, int position)
{
    Node* new_node = new Node(value);
    if(position == 1)
    {
        insert_at_start(head,value);
        return;
    }
    else
    {
        Node* temp = head;
        int count = 1;
        while(temp->next != NULL && count < position-1)
        {
            temp = temp->next;
            count++;
        }
        if(temp->next==NULL)
        {
            cout<<"INVALID  POSITION"<<endl;
            delete new_node;
            return;
        }
        new_node->next =  temp->next;
        temp->next = new_node;

    }
}

int search(Node* &head, int sear)
{
    if(head == NULL)
    {
        cout<<"list is empty\n";
        return 0;
    }
    Node*temp = head;
    int i = 1;
    while(temp != NULL)
    {
        if(temp->data == sear)
        {
            return i;
        }
        temp = temp->next;
        i++;
    }
    return 0;
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout<<"LINKED LIST IS EMPTY\n";
        return;
    }
    else
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n ";
    }
}
void delete_at_start(Node* &head)
{
    if(head == NULL)
    {
        cout<<"List is empty: \n";
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
    return;
}
void delete_at_end(Node* &head)
{
    if(head == NULL)
    {
        cout<<"list is empty\n";
        return;
    }
    if(head->next == NULL)
    {
        delete_at_start(head);
        return;
    }
    Node *temp = head;
    Node *prev  = head;
    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    delete temp;
    prev->next = NULL;
}
void delete_at_position(Node* &head, int position)
{
    if(head == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    if(position == 1)
    {
        delete_at_start(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while(temp->next != NULL && count < position-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp == NULL || temp->next == NULL)
    {
        cout<<"invalid position\n";
        return;
    }
    Node * delete_node = temp->next;
    temp->next = delete_node->next;
    delete delete_node;
    
}

int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
int main()
{
    Node* head = NULL;
    while(1)
    {
        cout<<"\t1-for insert at start\n";
        cout<<"\t2-for insert at end\n";
        cout<<"\t3-for insert at position\n";
        cout<<"\t4-for print list\n";
        cout<<"\t5-for delete at start\n";  
        cout<<"\t6-for delete at end\n"; 
        cout<<"\t7-for delete at position\n";
        cout<<"\t8-for linked list length\n";
        cout<<"\t9-for search elemetn\n";
        cout<<"\t10-for EXIT\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        int value,pos,sear,ans;
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
                insert_at_last(head,value);
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
                delete_at_end(head);
                break;

            case 7:
                cout<<"Enter the position : ";
                cin>>pos;
                delete_at_position(head,pos);
                break;

            case 8:
                cout<<"Length of linked list is: "<<getlength(head)<<endl;
                break;

            case 9:
                cout<<"Enter element  to search: ";
                cin>>sear;
                 ans = search(head,sear);
                if(ans == 0)
                {
                    cout<<"Element not found"<<endl;
                }
                else
                {
                    cout<<"Eelement found at position  "<<ans<<endl;
                }
                break;

            case 10:
                exit(0);

            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}