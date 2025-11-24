#include <iostream>
using namespace std;
int countDigits(int n) 
{
    int c = 0;
    if (n == 0) return 1;
    while (n != 0) 
    {
        c++;
        n /= 10;
    }
    return c;
}

int main() 
{
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}
