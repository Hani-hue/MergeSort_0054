#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input()
{
    cout << "Masukkan Panjang element array; ";
    cin >> n;

    if (n <= 20)
    {
        break;
    }
    else
    {
        cout << "\nMaksimal panjang array adalah 20";
    }

    cout << "\n==========================================";
    cout << "n\Inputkan Isi Element Array";
    cout << "\n==========================================" << endl;

    for (INT I = 0; i < n; i++)
    {
        cout << "Array index ke -  " << i << ": ";
        cin >> arr[i]
    }
}