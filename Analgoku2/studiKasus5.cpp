/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: studikasus5 Selection Short
 * Tahun    : 2020
 */
#include <iostream>
#include <conio.h>

using namespace std;

int data1[100], data2[100];
int jumlah;

void trade(int s, int r);
void SelectionSort();

int main()
{
    cout << "Selection Short";
    cout << "\nMasukkan Jumlah Data Yang akan diinput : ";
    cin >> jumlah;
    for (int i = 1; i <= jumlah; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> data1[i];
        data2[i] = data1[i];
    }

    SelectionSort();
    cout << "\n======================================" << endl;
    cout << "Data Setelah di Urutkan : " << endl;
    for (int i = 1; i <= jumlah; i++)
    {
        cout << " " << data1[i];
    }

    cout << "\n=====================================\n";
    getch();
}

void trade(int s, int r)
{
    int t;
    t = data1[r];
    data1[r] = data1[s];
    data1[s] = t;
}
void SelectionSort()
{
    int pos, i, j;
    for (i = 1; i <= jumlah - 1; i++)
    {
        pos = i;
        for (j = i + 1; j <= jumlah; j++)
        {
            if (data1[j] < data1[pos])
                pos = j;
        }
        if (pos != i)
            trade(pos, i);
    }
}