#include <iostream>
using namespace std;
void evenOrOdd(int n) 
{
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main() 
{
    int n;
    cin >> n;
    evenOrOdd(n);
}
