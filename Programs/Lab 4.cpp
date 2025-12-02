#include <iostream>
using namespace std;
int main(){
    int account_balance;
	bool loyality;
	cout << "Enter your account balance: $ ";
	cin >> account_balance;
	//checking account type
	cout << "account type: ";
	account_balance<100?cout<<"Low balance account":
	(account_balance>=100 && account_balance<=500?cout<<"Standard account":cout<<"Premuim account");
	//Special offer eligibilty
	cout<<"\nEnter 1 for loyal and 0 for not loyal: ";
	cin>>loyality;
	account_balance>200&&loyality==1?cout<<"\n Eligible for Special offer":cout<<"Not eligible";
	
	return 0;
	 	
}
