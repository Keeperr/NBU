#include <iostream>

using namespace std;

int main() {
	long all = 58000000;
	double ownership;
	
	cout << "Enter your ownership in KTB ";
	cin >> ownership;
	
	if(ownership > 100)
	{
		cout << "You can't own more than 100%";
		return 1;
	}
	
	if(ownership < 0)
	{
		cout << "You can't own less than 0%";
		return 1;
	}
	
	long int total = (all*ownership) / 100;
	
	cout << "You have " << ownership / 100 << " shares or "
	<< total << " BGN";
	
	return 0;
}
