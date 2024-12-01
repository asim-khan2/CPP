#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            return arr[i];
        }
    }
    return -1; // Return -1 if no unique element is found
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findUnique(arr, size);

    if (uniqueElement != -1) {
        cout << "The unique element is: " << uniqueElement << endl;
    } else {
        cout << "No unique element found." << endl;
    }

    return 0;
}
