#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    cout << "Enter 7 numbers:" << endl;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int mx = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    cout << "Maximum number: " << mx << endl;

    return 0;
}

