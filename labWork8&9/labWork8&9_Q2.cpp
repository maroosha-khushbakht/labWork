#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int arr[100];
    cout << "Enter marks:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int p= 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 50)
        {
            p++;
        }
    }

    cout << "Number of passed students: " << p << endl;

    return 0;
}
