#include<iostream> 
using namespace std;
#define MAX 5
class Stack {
	int stack[5];
	int top, end;
	
public: 
	Stack() {
		top=-1;	
	}
	
	void push() {
		int val;
		if(top == MAX-1) {
			cout << "Stack is Full, Can't push";
		} else {
			cout << "Enter element to push";
			cin >> val;
			top++;
			stack[top] = val;
			cout << val << " pushed, Successfully";
		}
	}
	
	void pop() {
		if(top == -1) {
			cout << "Stack is empty";
		} else {
			cout << stack[top] << " popped Successfully";
			top--;
		}
	}
	
	void peek() {
		if(top == -1) {
			cout << "Stack is empty";
		} else {
			cout << "Top element is " << stack[top];
		}
	}
	
	void empty() {
		if(top == -1) {
			cout << "Stack is empty";
		} else {
			cout << "Stack is Not empty";
		}
	}
	
	void full() {
		if(top == MAX-1) {
			cout << "Stack is full";
		} else {
			cout << "Stack is Not full";
		}
	}
	
	void display() {
		if(top == -1) {
			cout << "Stack is empty";
		} else {
			cout << "Stack elements are : \n";
			for(int i=top; i<=0; i--) {
				cout << stack[i] << "  ";
			}
			cout << endl;
		}
	}
};

int main() {
	Stack s;
	int ch;
	
	while(ch !=7) {
		cout << "\nenter choice: ";
		cin >> ch;
		
		switch(ch) {
			case 1: s.push(); break;
			case 2: s.pop(); break;
			case 3: s.peek(); break;
			case 4: s.empty(); break;
			case 5: s.full(); break;
			case 6: s.display(); break;
			case 7: cout << "Exiting..."; break;
		}
	}
}
