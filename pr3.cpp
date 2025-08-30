#include<iostream>
#include<cstring>
using namespace std;
#define MAX 10

class Stack {
	char stack[MAX];
	int top;
public:	
	Stack() {
		top = -1;
	}
	
	void push(char c) {
		if(top == MAX-1)
			cout << "Stack is Full\n";
		else 
			stack[++top] = c;
	}
	
	char pop() {
		if(top == -1) {
			cout << "Stack is Empty\n";
		}
		return stack[top--];
	}
	
	char peek() {
		if(top == -1) {
			return '\0';
		return stack[top];
		}
	}
};

class Expression {
	char infix[MAX];
	char postfix[MAX];
	
public:
	void read();
	void inToPost();
	int precedence(char symbol);
	int space(char c);
	void print();
};

void Expression::read() {
	cout << "Enter the infix expression: ";
	cin.getline(infix, MAX);
}

void Expression::inToPost() {
	Stack s;
	int j=0;
	char symbol, next;
	
	for(int i=0; i<strlen(infix); i++) {
		symbol = infix[i];
		if(!space) {
			switch(symbol) {
				case '(':
					s.push; break;
					
				case ')':
					while(next=s.pop() != '(') 
						postfix[j++] = next;
					break;
					
				case '+':
				case '-':
				case '*':
				case '/':
					while(!s.empty && precedence(s.peek()) >= precedence(symbol))
						postfix[++j] = s.pop();
					s.push(symbol);
					break;
					
				default:
					postfix[j++] = symbol;
			}
			while(!s.empty()) 
				postfix[j++] = s.pop();
			postfix[j] = '\0';
		}
	}
}

int Expression::precedence() {
	switch(symbol) {
		case '+':
		case '-':
			return 1;
			
		case '*':
		case '/':
			return 2;
			
		case '^':
			rerturn 3;
	}
}

int Expression::space() {
	if(c == ' ' || c == '\t')
		return 1;
	else 
		return 0;
}

void Expression::print() {
	cout << "The equivalent expression is: \n" << postfix;
}

int main() {
	Expression exp;
	exp.read();
	exp.inToPost();
	exp.print();
	return 0;
}
