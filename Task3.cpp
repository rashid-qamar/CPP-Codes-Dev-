#include <iostream>
using namespace std;

class Array {
    int arr[200];
    int size;

public:
    Array() {
        size = 0;
    }

    void inputArray() {
        cout << "Enter Array size: ";
        cin >> size;
        cout << "Enter numbers: \n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void sortAscending() {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "Elements in Ascending order:\n";
        display();
    }

    void sortDescending() {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "Elements in Descending order:\n";
        display();
    }

    void insertElement() {
        int ele, pos;
        cout << "Enter element to insert: ";
        cin >> ele;
        cout << "Enter position: ";
        cin >> pos;
        pos = pos - 1;
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = ele;
        size++;
        cout << "Element inserted.\n";
        display();
    }

    void deleteElement() {
        int ele, found = 0;
        cout << "Enter element to delete: ";
        cin >> ele;
        for (int i = 0; i < size; i++) {
            if (arr[i] == ele) {
                found = 1;
                for (int j = i; j < size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                size--;
                break;
            }
        }
        if (found)
            display();
        else
            cout << "Element NOT found!!\n";
    }

    void searchElement() {
        int ele, found = 0, pos;
        cout << "Enter searching element: ";
        cin >> ele;
        for (int i = 0; i < size; i++) {
            if (arr[i] == ele) {
                found = 1;
                pos = i + 1;
                break;
            }
        }
        if (found)
            cout << "Element found at position " << pos << endl;
        else
            cout << "Element NOT found\n";
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a;
    a.inputArray();
    int choice;
    while (choice != 7) {
        cout << "\n\nOptions:\n";
        cout << "-----------\n";
        cout << "1. Sorting in Ascending order\n";
        cout << "2. Sorting in Descending order\n";
        cout << "3. Insertion of element\n";
        cout << "4. Deletion of element\n";
        cout << "5. Searching of element\n";
        cout << "6. Display of element\n";
        cout << "7. Exit\n";
        cout << "\nSelect any option: ";
        cin >> choice;

        switch (choice) {
            case 1: a.sortAscending(); break;
            case 2: a.sortDescending(); break;
            case 3: a.insertElement(); break;
            case 4: a.deleteElement(); break;
            case 5: a.searchElement(); break;
            case 6: a.display(); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } 

    return 0;
}

