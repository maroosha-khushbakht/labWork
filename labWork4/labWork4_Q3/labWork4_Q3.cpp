#include <iostream>
using namespace std;
int main()
{
    int c;
	cout << "1. Calculate area of a circle" << endl;
	cout << "2. Calculate area of a rectangle" << endl;
	cout << "3. Calculate area of a triangle" << endl;
	cout << "4. Quit" << endl;
	cout << "Enter your choice (1-4): ";
	cin >> c;
	switch (c) 
	{
	case 1: 
	{
		float r;
		cout << "Enter radius of the circle: ";
		cin >> r;
		cout << "Area of circle: " << 3.14159 * r * r << endl;
		break;
	}
	case 2: 
	{
		float l, w;
		cout << "Enter length and width of the rectangle: ";
		cin >> l >> w;
		cout << "Area of rectangle: " << l * w << endl;
		break;
	}
	case 3: 
	{
		float b, h;
		cout << "Enter base and height of the triangle: ";
		cin >> b >> h;
		cout << "Area of triangle: " << 0.5 * b * h << endl;
		break;
	}
	case 4:
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
	return 0;
}

