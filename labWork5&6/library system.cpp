#include <iostream>
using namespace std;
int main() 
{
    int nb, nd, f=5, bf=0, tf=0;
    cout << "Enter the number of books: ";
    cin >> nb;
    
    for (int i = 1; i <= nb; i++)
    {   cout << "enter how late book " << i << " is: ";
        cin >> nd;
        for (int j = 1; j <= nd; j++)
        {  bf += f;
        if (bf >= 1000)
        {   bf = 1000;
            break;
        }
        f *= 2;
        
        }
        tf+=f;
    }
    cout << "total fine: Rs. " << tf;
    return 0;
}
