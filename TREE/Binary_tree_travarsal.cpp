#include<iostream>
using namespace std;

// void pre_order(char tree, int k);
void pre_order(char tree [], int k)
{
    if(tree[k] != '\0')
    {
        // N--L--R
        cout<<tree[k]<<" ";
        pre_order(tree,2*k+1);
        pre_order(tree, 2*k+2);
    }
}

void in_order(char tree[], int k)
{
    if(tree[k] != '\0')
    {
        // L--N--R
        in_order(tree,2*k+1);
        cout<<tree[k]<<" ";
        in_order(tree, 2*k+2);
    }
}

void post_order(char tree [], int k)
{
    if(tree[k] != '\0')
    {
        // L--R--N
        post_order(tree,2*k+1);
        post_order(tree, 2*k+2);
        cout<<tree[k]<<" ";
    }
}

int main()
{
    char tree[40] = {'A','B','C','M','\0','D','R','\0','\0','\0','\0','\0','\0','S','T','\0'};
    cout<<"\n===========Pre Order Travarsal==================\n";
    pre_order(tree, 0);
    cout<<"\n===========In Order Travarsal==================\n";
    in_order(tree, 0);
    cout<<"\n===========Post Order Travarsal==================\n";
    post_order(tree, 0);
    return 0;
}