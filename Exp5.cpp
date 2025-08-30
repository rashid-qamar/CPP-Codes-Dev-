#include<iostream>
using namespace std;
int main() {
	int n, i, search, mid, found=0;
	cout << "Enter no. of element: ";
	cin >> n;
	int a[n];
	int start=0, end=n-1;
	cout << "Enter number in Ascending Order: "<< endl;
	for (i=0; i<n; i++) {
		cin >> a[i];
	}
	cout << "\nEntered number: "<< endl;
	for (i=0; i<n; i++) {
		cout << a[i] <<" ";
	}
	cout << "\n\nEnter search element: ";
	cin >> search;
	
	while(start <= end) {
		mid = (start+end)/2;
		if (search > a[mid]) {
			start = mid + 1;
		} 
		else if(search < a[mid]) {
			end = mid - 1;
		}
		else {
			found = 1;
			break;
		}
	}
	if(found==1) {
		cout << "\nElement found at "<< mid+1 <<" Position\n";
	}
	else {
		cout << "Element NOT found\n";
	}
	return 0;
}
