#include<iostream>
using namespace std;
int main() {
	int r, i, n, sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=1; n>0; i++) {
		r = n%10;
		sum = sum + r;
		n = n/10;
	}
	cout<<"Sum of digit is : "<<sum;
	return 0;
}
