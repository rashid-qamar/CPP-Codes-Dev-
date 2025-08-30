//Binary to decimal
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int b=111; 
	int dec=0, i=0, r;
	while(b!=0) {
		r = b%10;
		dec += r * pow(2, i);
		b = b/10;
		i++;
	}
	cout << dec;
}
