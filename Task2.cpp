#include <iostream>
using namespace std;

class Option {
    int arr[200];
    int size;

public:
    Option() {
        size = 0;
    }

    void arithmetics() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Infinite (cuz of zero)" << endl;
    }

    void greatestLeast() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (a > b)
            cout << "Greatest: " << a << ", Least: " << b << endl;
        else
            cout << "Greatest: " << b << ", Least: " << a << endl;
    }

    void sortAscending() {
    	cout << "Enter size of array: ";
    	cin >> size;
    	cout << "Enter elements: \n";
    	for(int i=0; i<size; i++) {
    		cin >> arr[i];
		}
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
    	cout << "Enter size of array: ";
    	cin >> size;
    	cout << "Enter elements: \n";
    	for(int i=0; i<size; i++) {
    		cin >> arr[i];
		}
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

    void oddEven() {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        if (n % 2 == 0)
            cout << n << " is Even.\n";
        else
            cout << n << " is Odd.\n";
    }
    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Option m;
    int choice = 0;
    while (choice != 6) {
        cout << "\nOptions:\n";
        cout << "1. Arithmetic Operations\n";
        cout << "2. Greatest & Least\n";
        cout << "3. Sorting in Ascending Order\n";
        cout << "4. Sorting in Descending Order\n";
        cout << "5. Odd/Even\n";
        cout << "6. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: m.arithmetics(); break;
            case 2: m.greatestLeast(); break;
            case 3: m.sortAscending(); break;
            case 4: m.sortDescending(); break;
            case 5: m.oddEven(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid input\n";
        }
    }
    return 0;
}


