/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: studikasus2 Selection Sort
 * Tahun    : 2020
 */

#include <iostream>
#include <conio.h>

using namespace std;

int data1[100], data2[100];
int n;

void tukar(int a, int b);
void selection_sort();

int main()
{
    cout << "\nMasukkan Jumlah Data : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> data1[i];
        data2[i] = data1[i];
    }

    selection_sort();
    cout << "Data Setelah di Sort : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << " " << data1[i];
    }

    getch();
}

void tukar(int a, int b)
{
    int t;
    t = data1[b];
    data1[b] = data1[a];
    data1[a] = t;
}

void selection_sort()
{
    int pos, i, j;
    for (i = 1; i <= n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j <= n; j++)
        {
            if (data1[j] < data1[pos])
                pos = j;
        }
        if (pos != i)
            tukar(pos, i);
    }
}