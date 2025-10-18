#include <iostream>
using namespace std;
int main()
{
	int u, c;
	cout << "Enter the number of units consumed: " << endl;
	cin >> u;
	cout << "1. Domestic User" << endl;
	cout << "2. Commercial User" << endl;
	cout << "Enter	User Type (1 or 2): ";
	cin >> c;
	switch (c) 
	{case 1: 
		{
		int b;
		if (u <= 100)
			b = u * 10;
		else 
			b = u * 15;
	
		cout << "Your Bill: " << b << endl;
		break;
		}
	case 2:
		{
		int b;
		if (u <= 100)
			b = u * 20;
		else 
			b = u * 25;
	
		cout << "Your Bill: " << b << endl;
		break;
	}
	return 0;
}

