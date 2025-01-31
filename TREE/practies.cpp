#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node* buildBT(Node* &root)
{
    int data;
    cout << "Enter data: ";
    cin >> data;

    if(data == -1)
    {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for left : " << data << endl;
    root -> left = buildBT(root -> left);
    cout << "Enter data for right : " << data << endl;
    root -> right = buildBT(root -> right);

    return root;
}

void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

int main()
{
    Node* root = NULL;
     while(1)
    {
        cout << "\n\t1 for cunsturct Binary Tree: ";
        cout << "\n\t2 for INORDER: ";
        cout << "\n\t3 for EXIT: ";
        cout << "Enter your choice: ";
        int ch;
        cin >> ch;

        // switch for exicut all statement 
        switch(ch)
        {
            case 1:
                root = buildBT(root);
                break;
            
            case 2: 
                cout << "In Order : \n";
                inorder(root);
                break;
            case 3: 
                return(0);
                break;
            default:
                cout << "Invalid choice enter valid choice: ";
        }
    }
    return 0;
}