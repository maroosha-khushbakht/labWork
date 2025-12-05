#include <iostream>
using namespace std;

int g = 0;

void fun()
{
    static int s = 0; 
    s++;
    g++;

    cout << "Static count: " << s << ", Global count: " << g << endl;
}

int main()
{   int c;
    cout << "enter the number pf times you wanna call funtion: ";
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        fun();
    }

    return 0;
}
