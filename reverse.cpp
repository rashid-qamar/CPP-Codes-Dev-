#include<iostream>
using namespace std;
int main() {
	int rev=0, i, n, r;
	cout<<"Enter a number: ";
	cin>> n;
	while(n>0) {
		r = n%10; 
		rev = rev * 10 + r;
		n = n/10; 
	}
	cout<<"The reverse number is : "<<rev;
	return 0;
}
