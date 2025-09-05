#include<iostream>
using namespace std;

class Array {
	int a[200];
	int n;
	
public:
	Array() {
		n = 0;
	}
	
	void input() {
		cout << "Enter Array size: ";
        cin >> n;
        cout << "Enter numbers: \n";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
	}
	
	void insert() {
		int ele, pos;
		cout << "Enter element to insert: ";
		cin >> ele ;
		cout << "Enter position: ";
		cin >> pos;
		pos = pos-1;
		n++;
		for(int i=n-1; i>pos; i--) {
			a[i] = a[i-1];
		}
		a[pos] = ele;
		cout << "Updated Array: \n";
		display();
	}
	
	void deleteEle() {
		int ele, found=0;
		cout << "Enter element to delete: ";
		cin >> ele;
		for(int i=0; i<n; i++) {
			if(a[i] == ele) {
				found = 1;
				for(int j=i; j<n-1; j++) {
					a[j] = a[j+1];
				}
				n--;
				break;
			}
		}
		if(found = 1) {
			cout << "Updated Array: \n";
			display() ;
		} else {
			cout << "Element NOT found";
		}
	}
	
	void search() {
		int ele, flag=0, pos; 
		cout << "Enter element to search: ";
		cin >> ele;
		for(int i=0; i<n; i++) {
			if(a[i] == ele) {
				flag = 1;
				pos = i;
			}
		}
		if(flag = 1) {
			cout << "Element found at "<<pos+1<<" position\n";
		} else {
			cout << "Element NOT found\n";
		}
	}
	
	void update() {
		int ele, update;
		cout << "Enter element to update: ";
		cin >> ele;
		cout << "Enter new element: ";
		cin >> update;
		for(int i=0; i<n; i++) {
			if(a[i] == ele) {
				a[i] = update;
			}
		}
		cout << "Updated Array: \n";
		display();
	}
	
	void display() {
		for(int i=0; i<n; i++) {
			cout << a[i] << " ";
		}	
		cout << endl;
	}
};

int main() {
	Array m;
	m.input() ;
	int choice;
	while(choice != 6) {
		cout << "\nOptions :" << endl;
		cout << "------------" << endl;
		cout << "1. Insertion of an element" << endl;
		cout << "2. Deletion of an element" << endl;
		cout << "3. Searching of an element" << endl;
		cout << "4. Update Array" << endl;
		cout << "5. Display the updated array" << endl;
		cout << "6. Exit" << endl;
		
		cout << "\nEnter your choice: ";
		cin >> choice;
		
		switch(choice) {
			case 1: m.insert(); break;
			case 2: m.deleteEle(); break;
			case 3: m.search(); break;
			case 4: m.update(); break;
			case 5: m.display(); break;
			case 6: cout << "Exiting..."; break;	
		}		
	}
	return 0;
}
