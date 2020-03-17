/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: studikasus3 Binary Search
 * Tahun    : 2020
 */
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int jumlah, i, array[100], search, first, last, mid;
    cout << "Binary Search"  << endl;
    cout << "Masukkan banyak data : ";
    cin >> jumlah;

    for (i = 0; i < jumlah; i++)
    {
        cout << "Data ke-" << i + 1 << " :";
        cin >> array[i];
    }
    cout << "\nMasukkan data yang di cari :";
    cin >> search;
    first = 0;
    last = jumlah - 1;
    cout << "\n===================================" << endl;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (array[mid] < search)
        {
            first = mid + 1;
        }
        else if (array[mid] == search)
        {
            cout << search << " ditemukan pada data ke-" << mid + 1 << "\n";
            break;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }

    if (first > last)
    {
        cout << search << " Tidak Ditemukan!";
    }
    cout << "\n===================================" << endl;
    getch();
}