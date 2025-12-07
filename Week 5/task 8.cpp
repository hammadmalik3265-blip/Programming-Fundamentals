#include<iostream>
using namespace std;
int main()
{
	int year;
	char grade;
	float basicSalary=0,bonus=0,tax=0,grossSalary=0,netSalary=0;
	cout<<"Enter Your Grade"<<endl;
	cin>>grade;
	cout<<"Enter Your Years of Service"<<endl;
	cin>>year;
	
	if(grade=='A'||grade=='a')
	{
       basicSalary=50000;
	}
		if(grade=='B'||grade=='b')
	{
       basicSalary=30000;
	}
		if(grade=='C'||grade=='c')
	{
       basicSalary=20000;
	}
	if(year>=10)
	{
		bonus=basicSalary*0.10;
	}
		if(year<9&&year>5)
	{
		bonus=basicSalary*0.5;
	}
		if(year<5)
	{
		bonus=basicSalary*0;
	}
	grossSalary=basicSalary+bonus;
	if(grossSalary>40000)	{
		tax=grossSalary*0.20;
	}
		if(grossSalary>=30000&&grossSalary<=40000)	
	{
		tax=grossSalary*010;
		}
		if(grossSalary<30000){
		tax=0;
	}
	netSalary=grossSalary-tax;
	cout<<"basic salary:"<<basicSalary<<endl;
	cout<<"Bonus:"<<bonus<<endl;
	cout<<"gross salary:"<<grossSalary<<endl;
	cout<<"tax deducted:"<<tax<<endl;
	cout<<"net salary:"<<netSalary<<endl;
	return 0;
}
