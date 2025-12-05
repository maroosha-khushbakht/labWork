#include <iostream>
using namespace std;
void recharge(int &balance, int amount)
{
    balance = balance + amount;
}

int main()
{
    int balance, amount;

    cout << "Enter current balance: ";
    cin >> balance;

    cout << "Enter recharge amount: ";
    cin >> amount;

    recharge(balance, amount);

    cout << "Recharge successful. Updated balance: " << balance << endl;

    return 0;
}
