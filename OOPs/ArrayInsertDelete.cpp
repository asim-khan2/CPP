#include<iostream>
using namespace std;

void insert_at_beg(int arr[], int &n, int ele)
{
    // Shift elements to the right to make space for the new element
    for(int i=n; i>0; i--)  // Corrected the loop condition (i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = ele; // Insert the element at the beginning
    n++; // Increment the size of the array
}

// Function for insertion at a specific index
void insert_at_index(int arr[], int n, int index, int ele)
{
    // Shift elements to the right to create space at the specified index
    for(int i=n; i>index; i--)  // Corrected the loop condition (i--)
    {
        arr[i] = arr[i-1];
    }

    arr[index] = ele; // Insert the new element at the specified index
    n++; // Increment the size of the array
}

// Function to display the array
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[10], n, ch, ele, index;
    
    cout << "Enter the size of array:  ";
    cin >> n;

    // Taking input from user 
    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    while(1)
    {
        // Display options
        cout << "\n\t1 for insertion at beginning\n";
        cout << "\t2 to display the array elements\n";
        cout << "\t3 for insertion at a specific index\n";
        cout << "\t7 to exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter the element to insert at the beginning: ";
                cin >> ele;
                insert_at_beg(array, n, ele);
                break;

            case 2:
                display(array, n);
                break;

            case 3:
                cout << "Enter the element which want to insert: ";
                cin >> ele;
                cout << "Enter the index: ";
                cin >> index;
                
                // Checking if index is valid
                if(index >= 0 && index <= n) // Added index validation
                {
                    insert_at_index(array, n, index, ele);
                }
                else
                {
                    cout << "Invalid index!" << endl;  // Added validation message
                }
                break;

            case 7:
                exit(0); // Exit the program
                break;

            default:
                cout << "Please enter a valid choice." << endl;
        }
    }

    return 0;
}
