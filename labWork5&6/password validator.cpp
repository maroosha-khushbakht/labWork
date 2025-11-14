#include <iostream>
using namespace std;
int main()
{
    string p;

    while (true)
    {
        cout << "Enter password: ";
        cin >> p;

        if (p == "Python123")
        {
            cout << "Access granted";
            break;
        }
        else
        {
            cout << "Incorrect! Try again." << endl;
        }
    }

    return 0;
}
