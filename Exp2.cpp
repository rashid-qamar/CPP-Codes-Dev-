#include<iostream> 
using namespace std;

class bank {
	float balance;
	int loginPin;
	
	string typeHistory[100];
	float amount[100];
	int count;
	
public :
	bank() {
		balance = 0;
		count = 0;
	}
	
	void pinCreate() {
		cout << "Create your pin: ";
		cin >> loginPin;
		cout << "Your PIN has been created Succesfully !!\n";
	}
	
	void checkBalance() {
		int pin;
		cout << "Enter your PIN: ";
		cin >> pin;
		if(pin == loginPin) {
			cout << "Your current balance is " << balance <<endl;
		}
		else {
			cout << "You have Entered wrong PIN\n";
		}		
	}
	
	void deposite() {
		int deposite, pin;
		cout << "Enter amount to deposite: ";
		cin >> deposite;
		cout << "Enter your PIN: ";
		cin >> pin;
		if(pin == loginPin) {
			balance += deposite;
			cout << "Your amount deposite Succesfully !!\n";
				
			typeHistory[count] = "Deposited";
            amount[count] = deposite;
            count++;
		} 
		else {
			cout << "You have Entered wrong PIN\n";
		}
	}
	
	void withdraw() {
		int withdraw, pin;
		cout << "Enter amount to withdraw: ";
		cin >> withdraw;
		cout << "Enter your PIN: ";
		cin >> pin;
		if(pin == loginPin) {
			if(withdraw <= balance) {
				balance -= withdraw;
				cout << "Your amount Withdraw Succesfully !!\n";
				
				typeHistory[count] = "Withdraw";
	            amount[count] = withdraw;
	            count++;
			}
			else {
				cout << "You have insufficient amount \n";
			}
		}
		else {
			cout << "You have Entered wrong PIN\n";
		}
	}
	
	void miniStatement() {
		cout << "Mini Statement" << endl;
		cout << "-----------------" << endl;
		if(count ==0) {
			cout << "No Transection Found";
		}
		else {
			for(int i=0; i<count; i++) {
				cout <<i+1<<". "<<typeHistory[i]<<" Rs."<<amount[i]<<endl;
			}
		}
	}
	
	void changePin() {
		int pin, newPin;
		cout << "Enter your old PIN: ";
		cin >> pin;
		if(pin == loginPin) {
			cout << "Enter new PIN: ";
			cin >> newPin;
			loginPin = newPin;
			cout << "Your PIN has been changed Succesfully !!\n";
		}
		else {
			cout << "You have entered wrong PIN\n";
		}
	}	
};

int main() {
	bank b;
	int choice=0;
	while(choice != 7) {
		cout << "\nOptions: " << endl;
		cout << "--------------" << endl;
		cout << "1. Login pin" << endl;
		cout << "2. Check Balance" << endl;
		cout << "3. Amount Deposite" << endl;
		cout << "4. Amount Withdraw" << endl;
		cout << "5. Mini Statement" << endl;
		cout << "6. Change Pin" << endl;
		cout << "7. Exit" << endl;
		
		cout << "\nEnter your choice: ";
		cin >> choice;
		
		switch(choice) {
			case 1: b.pinCreate(); break;
			case 2: b.checkBalance(); break;
			case 3: b.deposite(); break;
			case 4: b.withdraw(); break;
			case 5: b.miniStatement(); break;
			case 6: b.changePin(); break;
			case 7: cout << "Exiting..."; break;
			
		}		
	}
	return 0;
}
