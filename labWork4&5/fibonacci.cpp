#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c, s = 0;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " " << endl;
        s = s + a;
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Sum = " << s;

    return 0;
}
