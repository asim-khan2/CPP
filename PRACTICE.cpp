#include<iostream>
using namespace std;
void insert_at_beg(int arr[], int &n, int ele);
void insert_at_index(int arr[],int &n, int ele, int index);
void deelete_arr_ele(int arr[],int &n, int index);
void display(int arr[], int n);

int main()
{
    int arr[10],n,ele,index;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(1)
    {
        cout<<"\t1-for insert at begning\n";
        cout<<"\t2-for insert at index\n";
        cout<<"\t3-for display\n";
        cout<<"\t4-for delete element\n";
        cout<<"\t5-for exit\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                cout<<"Enter element to insert at begning: ";
                cin>>ele;
                insert_at_beg(arr,n,ele);
                break;
            case 2:
                cout<<"Enter element to insert at index: ";
                cin>>ele;
                cout<<"Enter  index: ";
                cin>>index;
                insert_at_index(arr,n,ele,index);
                break;
            case 3:
                display(arr,n);
                break;
            case 4:
                cout<<"Enter index for delete element: ";
                cin>>index;
                deelete_arr_ele(arr,n,index);
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"invalid number: ";

        }
    }

    return 0;
}
void insert_at_beg(int arr[], int &n, int ele)
{
    for(int i=n; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=ele;
    n++;
}
void insert_at_index(int arr[],int &n, int ele, int index)
{
    if(index<0 || index>n)
    {
        cout<<"Invalid index";
    }
    else
    {
        for(int i=n; i>=index; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=ele;
        n++;
    }
}
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void deelete_arr_ele(int arr[],int &n, int index)
{
    for(int i=index; i<n-1; i++)
    {
        arr[index]=arr[index+1];
    }
    n--;
}