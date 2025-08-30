#include<iostream>
using namespace std;
int main() {
	int find, n, a[10], i;
	cout<<"Enetr no. of elements: ";
	cin>>n;
	cout<<"Enter numbers: ";
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	cout<<"Enter no. you have to search: ";
	cin>>find;
	for(i=0; i<n; i++) {
		if(find==a[i]) {
			cout<<"The element is fount at " <<i+1 << " position";
		}
	}
}

