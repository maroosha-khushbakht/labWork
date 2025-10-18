#include <iostream>
using namespace std;
int main()
{
	int oc = 0, ec = 0, num;
	cout << "Enter a number: ";
	cin >> num;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
		cout << "Enter another number: ";
		cin >> num;
	}
	cout << "Number of even numbers: " << ec << endl;
	cout << "Number of odd numbers: " << oc << endl;

	return 0;
}