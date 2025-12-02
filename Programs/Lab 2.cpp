#include <iostream>
using namespace std;
int main(){
 int age1,age2,age3;
	cout <<	"Enter age : ";
	cin >> age1;
	cout << "Enter age : ";
	cin >> age2;
	cout << "Enter age : ";
	cin >> age3;
// Using ternary operator 
    string category1= (age1 < 13) ? "Child" : (age1 <= 19) ? "Teenager" : "Adult";
    cout << "Age " << age1 << " falls under the category: " << category1 << endl;
    
    string category2= (age2 < 13) ? "Child" : (age2 <= 19) ? "Teenager" : "Adult";
    cout << "Age " << age2 << " falls under the category: " << category2 << endl;
    
    string category3= (age3 < 13) ? "Child" : (age3 <= 19) ? "Teenager" : "Adult";
    cout << "Age " << age3 << " falls under the category: " << category3 << endl;
    
    
    return 0;
	
}
