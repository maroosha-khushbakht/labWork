#include <iostream>
using namespace std;
int sumDigits(int n) 
{
    int s = 0;
    while (n > 0) 
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool isDivisibleBy3(int n) 
{
    return sumDigits(n) % 3 == 0;
}

int main() 
{
    int n;
    cin >> n;
    cout << isDivisibleBy3(n);
    return 0;
}
