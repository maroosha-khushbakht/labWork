#include <iostream>
using namespace std;
int main() 
{
    int numBook, numDay, fine, bookFine, totalFine=0;
    cout << "Enter the number of books: ";
    cin >> numBook;
    
    for (int i = 1; i <= numBook; i++)
    {   fine = 5;
        bookFine = 0;
        cout << "enter how late book " << i << " is: ";
        cin >> numDay;
        for (int j = 1; j <= numDay; j++){   
            bookFine += fine;
            if (bookFine >= 1000){
                bookFine = 1000;
                break;
            }
            fine *= 2;        
        }
        totalFine+=fine;
        cout << "fine for book " << i << " is : " << fine << endl;
    }
    cout << "total fine: Rs. " << totalFine;
    return 0;
}
