#include<iostream>
using namespace std;
int main() {
	int n, search, found=0, position;
	cout << "Enter no. of element: ";
	cin >> n;
	int a[n];
	cout << "Enter "<< n <<" numbers: "<< endl;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	cout << "\nEntered numbers: "<< endl;
	for(int i=0; i<n; i++) {
		cout << a[i] <<" ";
	}
	cout << "\n\nEnter search element: ";
	cin >> search;
	
	for(int i=0; i<n; i++) {
		if(search == a[i]) {
			found = 1;
			position = i+1;
		}
	}
	if(found == 1) {
		cout << "Element found at " << position <<" position";
	}
	else {
		cout <<"Element NOT found";
	}
	return 0;
}
