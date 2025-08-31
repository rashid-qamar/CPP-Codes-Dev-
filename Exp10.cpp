#include<iostream>
using namespace std;
#define n 5

class cQueue{
	int Q[n];
	int front, rear;
	
public:
	cQueue() {
		front = -1, rear = -1;
	}
	
	void insert() {
		int val;
		if(front == -1 && rear == -1) {
			cout << "Enter value to insert: ";
			cin >> val;
			front = rear = 0;
			Q[rear] = val;
			cout << val << " inserted, Successfully \n";
		}
		else if(((rear+1)%n) == front) {
			cout << "Queue is Full \n";
		}
		else {
			cout << "Enter value to insert: ";
			cin >> val;
			rear = (rear+1)%n ;
			Q[rear] = val;
			cout << val << " inserted, Successfully \n";
		}
	}
	
	void Delete() {
		if(front == -1 && rear == -1) {
			cout << "Queue is Empty \n";
		}
		else if(front == rear) {
			cout << Q[front] << " deleted, Successfully \n";
			front = rear = -1;
		}
		else {
			cout << Q[front] << " deleted, Successfully \n";
			front = (front+1)%n;
		}
	}
	
	void display() {
		if(front == -1 && rear == -1) {
			cout << "Queue is Empty \n";
		}
		else {
			cout << "Queue elements are: \n";
			int i = front;
			while(i != rear) {
				cout << Q[i] << "  ";
				i = (i+1)%n;
			}
			cout << Q[i] << endl;	
		}
	}	
};

int main() {
	cQueue q;
	int choice;
	while(choice != 4) {
		cout << "\nOptions: " << endl;
		cout << "1. Insertion" << endl;
		cout << "2. Deletion" << endl;
		cout << "3. Display" << endl;
		cout << "4. Exit" << endl;
		
		cout << "\nEnter any option: ";
		cin >> choice;
		
		switch(choice) {
			case 1: q.insert(); break;
			case 2: q.Delete(); break;
			case 3: q.display(); break;
			case 4: cout << "Exiting..."; break;
		}	
	}	
}
