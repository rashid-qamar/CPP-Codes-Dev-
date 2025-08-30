#include<iostream>
using namespace std;
class Queue {
	int Q[5]; 
	int n, front, rear;
	
public:
	Queue() {
		n=5, front=-1, rear=-1;
	}
	
	void insert() {
		int value;
		if(rear == n-1) {
			cout << "Queue if Full \n";
		}
		else {
			if(front == -1) {
				front = 0;
			}
			cout << "Enter element to insert: ";
			cin >> value;
			rear++;
			Q[rear] = value;
			cout << value << " Inserted, Successfully \n";
		}
	}
	
	void Delete() {
		if(rear == -1 || front > rear) {
			cout << "Queue is empty \n";
		}
		else {
			cout << "Element deleted from Queue is :" << Q[front] << endl;
			front++;
		}
	}
	
	void peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty, nothing to peek\n";
        } else {
            cout << "Front element is: " << Q[front] << endl;
        }
    }
    
    void empty() {
    	if (front == -1 || front > rear)
            cout << "Queue is empty \n";
        else
            cout << "Queue is NOT empty \n";
	}
	
	void full() {
		if (rear == n - 1)
            cout << "Queue is full \n";
        else
            cout << "Queue is NOT full \n";
	}
	
	void display() {
		if(front == -1 || front > rear) {
			cout << "Queue is Empty \n";
		}
		else {
			cout << "Queue elements are: \n";
			for(int i=front; i<=rear; i++) {
				cout << Q[i] << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	Queue m;
	int choice;
	while(choice != 7) {
		cout << "\nOptions: " << endl;
		cout << "1. Insertion" << endl;
		cout << "2. Deletion" << endl;
		cout << "3. Peek" << endl;
		cout << "4. isEmpty?" << endl;
		cout << "5. isFull?" << endl;
		cout << "6. Display" << endl;
		cout << "7. Exit" << endl;
		
		cout << "\nSelect any option: ";
		cin >> choice;
		
		switch(choice) {
			case 1: m.insert(); break;
			case 2: m.Delete(); break;
			case 3: m.peek(); break;
			case 4: m.empty(); break;
			case 5: m.full(); break;
			case 6: m.display(); break;
			case 7: cout << "Exiting..."; break;
		}
	}
	return 0;
}

