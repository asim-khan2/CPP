#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        // constructor 
        Node(int data){
            this->data = data;
            next = NULL;
        }
};

void insertStart(Node *&head, int value){
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertLast(Node *&head, int value) {
    Node *new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        cout << "This node is the first & last\n";
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) { // Stop at the last node
        temp = temp->next;
    }
    temp->next = new_node; // Attach the new node to the end
}

void insertSpecificPosition(Node *&head, int value, int position){
    Node *new_node = new Node(value);
    if(position==1){
        insertStart(head,value);
        return;
    }
    Node *temp = head;
    int count = 1;
    while(temp != NULL && count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp == NULL){
        cout<<"invalid position\n";
        delete new_node;
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    
}

void display(Node *head){
    if(head == NULL){
        cout<<"LIST is empty \n";
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node * head = NULL;
    while(1){
        cout<<"\t1-for inert at start\n";
        cout<<"\t2-for inert at end\n";
        cout<<"\t3-for inert at position\n";
        cout<<"\t4-for display\n";
        cout<<"\t5-for exit\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        int value,pos;
        switch(ch){
            case 1: 
                cout<<"Enter value: ";
                cin>>value;
                insertStart(head,value);
                break;
            case 2: 
                cout<<"Enter value: ";
                cin>>value;
                insertLast(head,value);
                break;
            case 3:
                cout<<"Enter value: ";
                cin>>value;
                cout<<"Enter position: ";
                cin>>pos;
                insertSpecificPosition(head,value,pos);
                break;
            case 4:
                display(head);
                break;
            case 5:
                exit(0);
            default:
                cout<<"please enter valid choice\n";
        }
    }
    return 0;
}