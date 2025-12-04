#include <iostream>
using namespace std;
int main() 
{
	int r, c;
	cout << "Enter number of rows: ";
	cin >> r;
	cout << "Enter number of columns: ";
	cin >> c;
	char arr[100][100];

	for (int i = 0; i < c; i++) 
	{
		for (int j = 0; j < r; j++) 
		{
			arr[i][j] = 'F';
			cout << "(" << i << " - " << j << " " << arr[i][j] << ") ";
		}
		cout << endl;
	}
	int rc, cc;
	cout << "Enter row of the seat number you want to reserve: ";
	cin >> rc;
	cout << "Enter column of the seat number you want to reserve: ";
	cin >> cc;
	arr[rc][cc] = 'T';
	cout << "Updated Seat Reservation Status: " << endl;
	for (int i = 0; i < c; i++) 
	{
		for (int j = 0; j < r; j++) 
		{
			cout << "(" << i << " - " << j << " " << arr[i][j] << ") ";
		}
		cout << endl;
	}
	return 0;

}
