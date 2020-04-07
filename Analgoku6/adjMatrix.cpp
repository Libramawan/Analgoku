/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: adjacency matrix 
 * Tahun    : 2020
 */

#include <iostream>
using namespace std;

int vertArr[20][20];
int count = 0;
void displayMatrix(int v);
void add_edge(int u, int v);

int main(int argc, char *argv[])
{
    int v;
    cout << "Masukkan jumlah matrix : ";
    cin >> v;

    int pilihan, a, b;
    while (true)
    {
        cout << "Pilihan menu : " << endl;
        cout << "1. Tambah edge " << endl;
        cout << "2. Print " << endl;
        cout << "3. Exit " << endl;
        cout << "Masukan pilihan : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "Masukkan node A (vertical)     : ";
            cin >> a;
            cout << "Masukkan node B (Horizontal)   : ";
            cin >> b;
            add_edge(a, b);
            cout << "Edge telah ditambahkan\n";
            system("Pause");
            system("CLS");
            break;
        case 2:
            displayMatrix(v);
            system("Pause");
            system("CLS");
            break;
        case 3:
            return 0;
            break;
        default:
            break;
        }
    }
}

void displayMatrix(int v)
{
    int i, j;
    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v)
{
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}