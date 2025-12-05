#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    int n = 7;
    for (int i = 0; i < n; i++)
    {
         cout << "Enter number " << i + 1 << " of the array: ";
         cin >> arr[i];
    }
   
    int f = 0;
    int l = n - 1;

    while (f < l)
    {
        int temp = arr[f];
        arr[f] = arr[l];
        arr[l] = temp;

        f++;
        l--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
