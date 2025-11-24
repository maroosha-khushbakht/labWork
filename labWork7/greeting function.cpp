#include <iostream>
using namespace std;
void greet(string name) 
{
    cout << "Hello " << name;
}

int main() 
{
    string n;
    cin >> n;
    greet(n);
}
