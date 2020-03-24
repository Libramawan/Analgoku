/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: Program ini menunjukkan fungsi dari GALE SHAPLEY
 * Tahun    : 2020
 */
#include <iostream>
using namespace std;

bool isFree(int matchup[5]);
bool hasProposed(int proposal[5]);
void GSFunction(int mpref[][5], int wpref[][5], int matchup[5]);
void print(int matchup[], int size);

int main(){
    //Men’s Preferences Profile (mpp)
    int mpp[5][5] = {
        {1, 0, 3, 4, 2},
        {3, 1, 0, 2, 4},
        {1, 4, 2, 3, 0},
        {0, 3, 2, 1, 4},
        {1, 3, 0, 4, 2}};
    //Women’s Preferences Profile (wpp)
    int wpp[5][5] = {
        {4, 0, 1, 3, 2},
        {2, 1, 3, 0, 4},
        {1, 2, 3, 4, 0},
        {0, 4, 3, 2, 1},
        {3, 1, 4, 2, 0}};
    int matchup[5] = {-1, -1, -1, -1, -1}; 
    GSFunction(mpp, wpp, matchup);
    print(matchup, sizeof(matchup) / sizeof(matchup[0]));
}

bool isFree(int matchup[5]){
    for (int i = 0; i < 5; i++)
    {
        if (matchup[i] == -1)
            return true;
    }
    return false;
}

bool hasProposed(int proposal[5]){
    for (int i = 0; i < 5; i++)
    {
        if (proposal[i] != 5)
            return false;
    }
    return true;
}

bool prefers(int wpref[][5], int w, int m1, int m2){
    int m1idx = -1, m2idx = -1;
    for (int i = 0; i < 5; i++)
    {
        if (wpref[w][i] == m1)
            m1idx = i;
        else if (wpref[w][i] == m2)
            m2idx = i;
    }
    if (m1idx < m2idx)
        return true;
    else
        return false;
}

void GSFunction(int mpref[][5], int wpref[][5], int matchup[5]){
    int proposal[5] = {0};               
    int taken[5] = {-1, -1, -1, -1, -1}; 

    while (isFree(matchup) && !hasProposed(proposal)){
        for (int i = 0; i < 5; i++){
            if (matchup[i] == -1) {
                int temp = mpref[i][proposal[i]];
                if (taken[temp] == -1){
                    matchup[i] = temp;
                    taken[temp] = i;
                }
                else if (prefers(wpref, temp, i, taken[temp])){
                    matchup[taken[temp]] = -1;
                    matchup[i] = temp;
                    taken[temp] = i;
                }
            }
            proposal[i]++;
        }
    }
}

void print(int matchup[], int size){
    cout << "result of stable-matching: " << endl;
    cout << "{";
    for (int i = 0; i < size; i++){
        //86 = U
        //65 = A
        cout << "(" << (char)(i + 86) << ", " << (char)(matchup[i] + 65) << "),";
    }
    cout<<"}";
}