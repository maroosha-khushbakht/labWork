#include <iostream>
using namespace std;
int main() 
{
    int nb;
    cout << "Enter number of books: ";
    cin >> nb;

    int b = 1;
    while (b <= nb) 
    {
        cout << "Book " << b << ":" << endl;
        int d = 1;
        int f = 5;
        while (f <= 1000)
        {
            cout << "Day " << d << ": Rs. " << f << endl;
            f *= 2;
            d++;
        }
        if (f > 1000) cout << "Fine reached max: Rs. 1000" << endl;
        cout << endl;
        b++;
    }
    return 0;
}
