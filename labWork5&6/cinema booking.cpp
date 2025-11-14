#include <iostream>
using namespace std;
int main()
{
    int r = 3, c = 4;
    char s[3][4];
    int x, y;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            s[i][j] = 'F';

    while (true)
    {
        cout << endl << "Current Seat Plan:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << "(" << i + 1 << "-" << j + 1 << " " << s[i][j] << ") ";
            cout << endl;
        }

        cout << endl << "Enter row and column to reserve (00 to stop): ";
        cin >> x >> y;

        if (x == 0 && y == 0)
            break;

        x--;
        y--;

        if (s[x][y] == 'R')
            cout << "Seat already reserved!" << endl;
        else
        {
            s[x][y] = 'R';
            cout << "Seat reserved successfully!" << endl;
        }
    }

    cout << endl << "Final Seat Plan:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << "(" << i + 1 << "-" << j + 1 << " " << s[i][j] << ") ";
        cout << endl;
    }

    cout << endl << "Thank you!";

    return 0;
}
