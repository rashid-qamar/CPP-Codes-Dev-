#include<iostream>
using namespace std;
#define MAX 10
int main() {
	int stack[MAX], top=-1;
	int choice, value;
	while(choice != 7) {
		cout << "\nOptions: " << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peek" << endl;
		cout << "4. isEmpty?" << endl;
		cout << "5. isFull?" << endl;
		cout << "6. Display" << endl;
		cout << "7. Exit" << endl;
		
		cout << "\nSelect any option: ";
		cin >> choice;
		
		switch(choice) {
			case 1:{
				if(top == MAX-1) {
					cout << "Stack is Full, Can't Push\n";
				}
				else {
					cout << "Enter value to push: ";
					cin >> value;
					top++;
					stack[top] = value;
					cout << value << " pushed, Successfully! \n";
				}
				break;
			}
			
			case 2:{
				if(top < 0) {
					cout << "stack is empty, Can't pop\n";
				}
				else {
					cout << stack[top] << " Popped, Successfully! \n";
					top--;
				}
				break;
			}
			
			case 3:{
				if(top < 0) {
					cout << "Stack is empty \n";
				}
				else {
					cout << "Top element is " << stack[top];
				}
				break;
			}
			
			case 4:{
				if(top == -1) {
					cout << "Stack is Empty \n";
				}
				else {
					cout << "Stack is not Empty \n";
				}
				break;
			}
			
			case 5:{
				if(top == MAX-1) {
					cout << "Stack is Full \n";
				}
				else {
					cout << "Stack is Not Full \n";
				}
				break;
			}
			
			case 6:{
				if(top < 0) {
					cout << "Stack is Empty \n";
				}
				else {
					cout << "Stack element are: \n";
					for(int i=top; i>=0; i--) {
						cout << stack[i] << "  ";
					}
					cout << endl;
				}
				break;
			}
			
			case 7:{
				cout << "Exiting...\n";
				break;
			}
		}
	}
	return 0;
}
