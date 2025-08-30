#include<iostream>
using namespace std;
class student {
	public:
		student(string name) {
			cout<<"Hello, " << name << " is there";
		}
};
int main() {
	student s("Rashid");
	return 0;
}
