#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a marks(out of 100)";
	cin>>n;
	if(n>=90)
	{
		cout<<"Grade:A+"<<endl;
	}
	if(n>=80 && n<90)
	{
		cout<<"Grade:A"<<endl;
	}
	if(n>=70 && n<80)
	{
		cout<<"Grade:B"<<endl;
	}
	if(n>=60 && n<70)
	{
		cout<<"Grade:C"<<endl;
	}
	if(n<60)
	{
		cout<<"Grade:Fail"<<endl;
	}
	return 0;
}