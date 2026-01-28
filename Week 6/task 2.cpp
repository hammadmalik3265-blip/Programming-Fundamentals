#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout << "Enter Temperature: " ;
    cin >> temp;
    
    if (temp>=40)
    {
    cout<< "Stay Inside";
	}
	
	else if (temp<=39 && temp>=30)
	{
	cout<< "Drink plenty of water";
	}

    else if (temp<=29 && temp>=20)
	{
	cout<< "Weather is pleasant and suitable for outdoor activities";
	}

    else 
    cout<< "Wear warm cloths";
		
    return 0;
}

