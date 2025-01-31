#include<iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node *left;
        Node *right;
        // constructor 
        Node(int data)
        {
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

Node* insertIntoBST(Node* &root, int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d < root -> data)
    {
        // insert into left subtree
        root -> left = insertIntoBST(root -> left, d);
    }
    else
    {
        // insert into right subtree
        root -> right = insertIntoBST(root -> right, d);
    }
    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;
    while(data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}

bool searchInBST(Node* root, int key)
{
    if(root == NULL)
    {
        return false ;
    }
    if (root -> data == key)
    {
        return true ;
    }
    if(key < root -> data)
    {
        // search in left subtree
        return searchInBST(root -> left, key);
    }
    else
    {
        return searchInBST(root -> right, key);
    }
    return false ;
}

void preOrder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data << " ";
    preOrder(root -> left);
    preOrder(root -> right);

}

void inOrder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root -> left);
    cout<<root->data << " ";
    inOrder(root -> right);

}

void postOrder(Node * root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root->data << " ";

}



int main()
{
    Node* root = NULL;

    // takeInput(root);

    while(1)
    {
        cout << "\t\n1for insert data in BST: ";
        cout << "\t\n2for pre Order Traversal in BST: ";
        cout << "\t\n3for in Order Traversal in BST: ";
        cout << "\t\n4for post Order Traversal in BST: ";
        cout << "\t\n5 for search in BST: ";
        cout << "\t\n7for exit: \n";

        cout<<"\n\nEnter your choice: ";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1: 
                cout << "Enter data for insert in BST (-1 to stop):";
                takeInput(root);
                break;
            case 2:
                preOrder(root);
                break;
            case 3: 
                inOrder(root);
                break;
            case 4: 
                postOrder(root);
                break;
            case 5:
                cout<<"Enter data for search in BST: ";
                int data;
                cin>>data;
                if(searchInBST(root, data))
                {
                    cout<<"\ndata found in BST: \n";

                }
                else
                {
                    cout<<"\ndata not fount in BST: \n";
                }
                break;
            case 7:
                return 0;
            default:
                cout<<"Invalid choice";
        }
    }
    return 0;
}