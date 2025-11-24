#include <iostream>
using namespace std;
void printTable(int n) 
{
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n*i << endl;
}

void printTableRange(int a, int b) 
{
    for (int i = a; i <= b; i++)
        printTable(i);
}

int main() 
{
    int s, e;
    cin >> s >> e;
    printTableRange(s, e);
    return 0;
}
