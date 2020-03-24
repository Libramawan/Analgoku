/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: studikasus4 Insertion Short
 * Tahun    : 2020
 */
#include <iostream>
#include <conio.h>

using namespace std;

int data1[100], data2[100], jumlah;

void Insert_sort();

int main()
{
    cout << "Insertion Short" << endl;
    cout << "Masukkan Jumlah Data : ";
    cin >> jumlah;
    cout << endl;

    for (int i = 1; i <= jumlah; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> data1[i];
        data2[i] = data1[i];
    }
    cout << "\n=================================" << endl;
    Insert_sort();
    cout << "\nData Setelah di Urutkan : " << endl;

    for (int i = 1; i <= jumlah; i++)
    {
        cout << data1[i] << " ";
    }
    cout << "\n==================================" << endl;
    getch();
}

void Insert_sort()
{
    int temp, i, j;
    for (i = 1; i <= jumlah; i++)
    {
        temp = data1[i];
        j = i - 1;
        while (data1[j] > temp && j >= 0)
        {
            data1[j + 1] = data1[j];
            j--;
        }
        data1[j + 1] = temp;
    }
}