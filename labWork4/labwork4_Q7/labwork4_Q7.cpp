#include <iostream>
using namespace std;
int main()
{
	int sn = 111, num;
	cout << "Guess the number: ";
	cin >> num;
	while (num != sn)
	{
		if (num < sn)
		{
			cout << "Too low. Try again: ";
			cin >> num;
		}
		else
		{
			cout << "Too high. Try again: ";
			cin >> num;
		}
	}
	cout << "Congratulations!" << endl;
	return 0;
}