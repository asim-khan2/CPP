#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }
};

void insert(Node * &head, int value)
{
    Node *new_node = new Node(value);
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    // Node *temp = head;
    new_node->next = head;
    head = new_node;
}
void display(Node *head)
{
    Node *temp = head;
    if(head == nullptr)
    {
        cout<<"list is empty\n";
        return;
    }
    cout<<"Head -> ";
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
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

int main()
{
    Node* head = NULL;
    insert(head,20);
    insert(head,40);
    insert(head,60);
    insert(head,80);
    display(head);
    int ans = search(head, 20);
    if(ans == 0)
    {
        cout<<"Element not found\n";
    }
    else{
        cout<<"Element fount at position " << ans;
    }
    return 0;
}