#include<iostream>
using namespace std;
int main() {
	int n, i;
	cout<<"Enter a number: ";
	cin>> n;
	for(i=1; i<=10; i++) {
		int r = n*i;
		cout<<n <<"x" <<i <<"=" <<r <<endl;
	}
}
