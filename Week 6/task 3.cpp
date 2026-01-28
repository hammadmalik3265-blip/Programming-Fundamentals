#include<iostream>
using namespace std;
int main ()
{             //program for login system
   string username; 
   string passward;  
   string correctusername = "admin";        // new user name idr sy change kar sakty
   string correctpassward = "12345";          // new passward 
   
   cout << "Enter usernmame : ";
   cin >> username;
   
   cout << "Enter passward : ";
   cin >> passward;
	
   if(username==correctusername && passward==correctpassward)
   {
   	cout<<"Access Granted"<<endl;
   }
   else if (username!=correctusername && passward==correctpassward)
   {
   cout <<"User NOt Found" <<endl;
   }
   else if (username==correctusername && passward!=correctpassward)
   {
   	cout <<"Wronng Passward" <<endl;
   }
   else {
   	cout << "User Not Found" <<endl;
   }
	
	return 0;
}
