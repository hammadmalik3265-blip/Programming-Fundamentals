#include<iostream>
using namespace std;
int main()
{
	float balance,withdrawal;
	cout<<"Enter your account balance";
	cin>>balance;
	cout<<"Enter the withdrawal amount";
	cin>>withdrawal;
	if(withdrawal<=balance)
	{
	balance=balance-withdrawal;
	cout<<"Transaction successful"<<endl;
	cout<<"Remaining balance"<<balance<<endl;
	}
	else
	{
		cout<<"Insufficient balance";
	}
	return 0;	
	
}
