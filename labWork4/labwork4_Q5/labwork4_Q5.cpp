#include <iostream>
using namespace std;
int main()
{
	int c, x, y;

	while (true)
	{
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice (1-5): " << endl;
		cin >> c;

		switch (c)
		{
		case 1:
		{
			cout << "Enter two numbers: " << endl;
			cin >> x >> y;
			cout << "Result: " << x + y << endl;
			break;
		}
		case 2:
		{
			cout << "Enter two numbers: " << endl;
			cin >> x >> y;
			cout << "Result: " << x - y << endl;
			break;
		}
		case 3:
		{
			cout << "Enter two numbers: " << endl;
			cin >> x >> y;
			cout << "Result: " << x * y << endl;
			break;
		}
		case 4:
		{
			cout << "Enter two numbers: " << endl;
			cin >> x >> y;
			if (y != 0)
				cout << "Result: " << x / y << endl;
			else
				cout << "Math Error" << endl;
			break;
		}
		case 5:
		{
			return 0;
		}
		default: cout << "Invalid Input"; break;

		}
	}
	
	return 0;
}