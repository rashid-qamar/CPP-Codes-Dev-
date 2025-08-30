#include<iostream>
using namespace std;
int main() {
	int a[10], max, n, i;
	cout<<"Enter array size: ";
	cin>>n ;
	cout<<"Enter elements: "<<endl;
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	max = a[0];
	for(i=1; i<n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	cout<<"The max element is: "<<max;
	return 0;
}
