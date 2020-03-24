/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: studikasus3 Insertion Sort
 * Tahun    : 2020
 */

#include <iostream> 
#include <conio.h>

using namespace std;

int data1[100], data2[100], n;
void insertion_sort();

int main()
{
    cout << "Masukkan Jumlah Data : ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> data1[i];
        data2[i] = data1[i];
    }
    insertion_sort();
    cout << "\nData Setelah di Sort : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << data1[i] << " ";
    }
    getch();
}

void insertion_sort()
{
    int temp, i, j;
    for (i = 1; i <= n; i++)
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