#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

class Stack {
    char stack[MAX];
    int top;
public:
    Stack() { 
		top = -1; 
	}

    void push(char c) {
        if (top == MAX - 1)
            cout << "Stack is Full \n";
        else
            stack[++top] = c;
    }

    char pop() {
        if (top == -1) {
            cout << "Stack Underflow \n";
            return '\0';
        }
        return stack[top--];
    }

    int empty() {
        if(top == -1)
			return 1;
		else
			return 0;
    }

    char peek() {
        if (top == -1) 
			return '\0';
        return stack[top];
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

int Expression::space(char c) {
    if(c == ' ' || c == '\t') 
		return 1;
	else
		return 0;
}

int Expression::precedence(char symbol) {
    switch (symbol) {
        case '^': 
			return 3;
        case '*':
        case '/': 
			return 2;
        case '+':
        case '-': 
			return 1;
        default:
			return 0;
    }
}

void Expression::inToPost() {
    Stack s;
    int j = 0;
    char symbol, next;

    for (int i = 0; i < strlen(infix); i++) {
        symbol = infix[i];
        if (!space(symbol)) {
            switch (symbol) {
                case '(':
                    s.push(symbol);
                    break;
                    
                case ')':
                    while ((next = s.pop()) != '(')
                        postfix[j++] = next;
                    break;
                    
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while (!s.empty() && precedence(s.peek()) >= precedence(symbol))
                        postfix[j++] = s.pop();
                    s.push(symbol);
                    break;
                    
                default:
                    postfix[j++] = symbol;
            }
        }
    }
    while (!s.empty())
        postfix[j++] = s.pop();
    postfix[j] = '\0';
}

void Expression::print() {
    cout << "\nThe equivalent postfix expression is: \n" << postfix << endl;
}

int main() { 
    Expression exp;
    exp.read();
    exp.inToPost();
    exp.print();
    return 0;
}

