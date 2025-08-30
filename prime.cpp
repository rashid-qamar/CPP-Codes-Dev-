#include<iostream>
using namespace std;
int main() {
	int n, flag=1, i=2;
	cout<<"Enter a number: ";
	cin>>n ;
	while (i<=n-1) 
	{
		if(n%i==0)
		{
			flag = 0;
		}
		i++;
	}
	if (flag==1) {
		cout<<"The given number is a Prime number";
	}
	else if (flag==0) {
		cout<<"The given number is not a prime number";
	}
	return 0;
}
