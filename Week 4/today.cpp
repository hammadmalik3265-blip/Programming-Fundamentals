#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter integer:";
	cin >> x ;
	// Ternary operator: condition ? true-part : false-part
	(x % 2 == 0) ? cout <<"The Number "<< x << " is even "<< endl
	             : cout<<"The Number "<< x << " is odd "<< endl;
return 0;	             
}

