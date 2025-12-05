#include <iostream>
using namespace std;
void attemptWithdraw(int balance, int amount)
{
    cout << "Attempting withdrawal..." << endl;

    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Withdrawal successful. New balance inside function: " << balance << endl;
    }
    else
    {
        cout << "Withdrawal failed. Not enough balance." << endl;
    }
}

int main()
{
    int b, a;

    cout << "Enter balance: ";
    cin >> b;

    cout << "Enter amount to withdraw: ";
    cin >> a;

    attemptWithdraw(b, a);

    cout << "Balance in main: " << b << endl;

    return 0;
}
