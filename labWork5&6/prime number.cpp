#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    for (int i = n/2; i < 0; i--)
    {
        if (n % i == 0)
          cout << n << " is prime.";
        else
          cout << n << " is not prime.":
    }

    

    return 0;
}
