#include <iostream>
using namespace std;
void line() 
{
    cout << "------------\n";
}

void checkEvenOdd(int n) 
{
    if (n % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";
    line();
}

int main() 
{
    int n;
    while (cin >> n) 
    {
        checkEvenOdd(n);
    }
    return 0;
}
