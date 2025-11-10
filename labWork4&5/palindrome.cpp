#include <iostream>
using namespace std;
int main() 
{   int n, r, d, c;
    cout << "Enter range (n): ";
    cin >> n;
    c = n;
    while (n != 0)
    {
        d = n % 10;
        r = r*10 + d;
        n /=10;
    }
    if ( c == r)
        cout << c << " is a palindrome.";
    else
        cout << c << " is not a palindrome.";
        
    return 0;
}
