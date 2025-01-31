#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data)// cunstructure 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
};

Node* buildTree(Node* root)
{
    int data;
    cout << "Enter data (-1 to end): ";
    cin >> data;

    if(data == -1)
    {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data in left of data : " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter data in right of data : " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
    return;
}

void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
    return;
}

void postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
    return;
}

int main()
{
    Node* root = NULL;
    // root = buildTree(root);
    while(1)
    {
        cout << "\n\t1 for cunsturct Binary Tree: ";
        cout << "\n\t2 for PREORDER: ";
        cout << "\n\t3 for INORDER: ";
        cout << "\n\t4 for POSTORDER: ";
        cout << "\n\t6 for EXIT: ";
        cout << "Enter your choice: ";
        int ch;
        cin >> ch;

        // switch for exicut all statement 
        switch(ch)
        {
            case 1:
                root = buildTree(root);
                break;
            case 2:
                cout << "Pre Order : \n";
                preOrder(root);
                break;
            case 3: 
                cout << "In Order : \n";
                inOrder(root);
                break;
            case 4: 
                cout << "Post Order : \n";
                postOrder(root);
                break;
            case 6: 
                return(0);
                break;
            default:
                cout << "Invalid choice enter valid choice: ";
        }
    }


    return 0;
}