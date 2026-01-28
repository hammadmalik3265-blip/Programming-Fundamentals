#include<iostream>
using namespace std;
int main()
{	
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if(num>0)
    {
	cout << "The number is Positive";
	}	
	else if(num<0)
	{
    cout << "The number is Negative";
	}
	else{
    cout << "The number is zero"; 
	}
	return 0;
}
