#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string pr1, pr2;
	int q1, q2;
	float up1, up2, t1, t2;

	cout << "Product 1 Name: ";
	getline(cin, pr1);

	cout << "Quantity: ";
	cin >> q1;

	cout << "Price: ";
	cin >> up1;

	cout << "Product 2 Name: ";
	cin.ignore();
	getline(cin, pr2);

	cout << "Quantity: ";
	cin >> q2;

	cout << "Price: ";
	cin >> up2;
	
	t1 = up1 * q1;
	t2 = up2 * q2;
	
	cout << left << setw(20) << "Item" << setw(20) << "Quantity" << setw(20) << "Price" << setw(20) << "Total" << endl;
	
	cout << left << setw(20) << pr1 << setw(20) << q1 << setw(20) << up1 << setw(20) << t1 << endl;
	cout << left << setw(20) << pr2 << setw(20) << q2 << setw(20) << up2 << setw(20) << t2 << endl;
	

	return 0;
}