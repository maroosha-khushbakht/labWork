#include <iostream>
using namespace std;
void menu() 
{
    cout << "1. Even / Odd" << endl;
    cout << "2. Count Digits" << endl;
    cout << "3. Sum of Digits" << endl;
    cout << "4. Prime Check" << endl;
    cout << "5. Exit" <<endl;
}

int getNumber() 
{
    int n;
    cin >> n;
    return n;
}

void checkEvenOdd(int n) 
{
    if (n % 2 == 0) cout << "Even\n";
    else cout << "Odd" << endl;
}

int countDigits(int n) 
{
    int c = 0;
    if (n == 0) return 0;
    while (n != 0) 
    {
        c++;
        n /= 10;
    }
    return c;
}

int sumDigits(int n) 
{
    int s = 0;
    while (n > 0) 
    {
        s += n%10;
        n /= 10;
    }
    return s;
}

bool isPrime(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return false;
    return true;
}

int main() 
{
    int choice;
    while (true) 
    {
        menu();
        cin >> choice;
        if (choice == 5) break;
        int n = getNumber();

        if (choice == 1) checkEvenOdd(n);
        else if (choice == 2) cout << countDigits(n) << endl;
        else if (choice == 3) cout << sumDigits(n) << endl;
        else if (choice == 4) 
        {
            if (isPrime(n)) cout << "Prime\n";
            else cout << "Not Prime\n";
        }
    }
    return 0;
}
