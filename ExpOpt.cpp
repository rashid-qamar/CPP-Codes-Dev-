#include<iostream>
#include<cstring>
using namespace std;
#define MAX 50

class Stack {
	char stack[MAX]; 
	int top;
	
public:
	Stack() {
		top = -1;
	}
	
	void push(char c) {
		if(top == MAX-1)
			cout << "Stack is Full \n";
		else 
			stack[++top] = c;
	}
	
	char pop() {
		if(top == -1) {
			cout << "Stack is Empty \n";
			return '\0';
		}
		else
			return stack[top--];
	}
	
	int empty() {
		if(top == -1)
			return 1;
		else
			return 0;
	}
	
	char peek() {
		if(top == -1) 
			return '\0';
		else
			return stack[top];
	}
};

class Expression {
	char infix[MAX];
	char prefix[MAX];
	
public:
	void read();
	void inToPre();
	int precedence(char symbol);
	int space(char c);
	void print();
};

void Expression::read() {
	cout << "Enter Infix Expression:  ";
	cin.getline(infix, MAX);						
}

int Expression::precedence(char symbol) {
	switch(symbol) {
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default :
			return 0;
	}
}

void Expression::inToPre() {
	Stack s;
	int j = 0;
	char symbol, next;
	for(int i = strlen(infix) - 1; i>=0; i--) {				//For Reversing expression
		symbol = infix[i];
		if( !space(symbol) ) {
			switch(symbol) {
				
				case '(':
					while((next = s.pop()) != ')')
						prefix[j++] = next;
					break;
					
				case ')':
					s.push(symbol); 
					break;	
					
				case '+':
				case '-':
				case '*':
				case '/':
				case '^':
					while(!s.empty() && precedence(s.peek()) > precedence(symbol))
						prefix[j++] = s.pop();	
					s.push(symbol);
					break;
				
				default:
					prefix[j++] = symbol;								
			}
		}	
	}
	while( !s.empty()) 							//For printing stored Stack Element
		prefix[j++] = s.pop();
	prefix[j] = '\0';
}

int Expression::space(char c) {
	if(c == ' ' || c == '\t')
		return 1;
	else 
		return 0;
}

void Expression::print() {
	cout << "\nThe equivalent Prefix expression is: \n" << strrev(prefix) << endl;
}

int main() {
	Expression exp;
	exp.read();
	exp.inToPre();
	exp.print();
	return 0;
}
