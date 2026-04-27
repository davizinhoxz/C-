#include <iostream>
using namespace std;

const int linhas=5, colunas=7;
char Tabuleiro[linhas][colunas];

char IniciarTabuleiro() {
    for (int x=0; x<linhas; x++) {
        for (int y=0; y<colunas; y++) {
            Tabuleiro[x][y] = '-';
        }
    }
}

char MostrarTabuleiro() {
    for (int x=0; x<linhas; x++) {
        for (int y=0; y<colunas; y++) {
            cout << " | " << Tabuleiro[x][y];
            if(y == (colunas - 1)) {
                cout << " | ";
            }
        }
        cout << "\n";
    }
    cout << " -----------------------------" << "\n";
    for (int z=0; z < colunas; z++) {
        cout << " | " << z;
        if (z == (colunas-1)) {
            cout << " | ";
        }
    }
}

int main() {
    IniciarTabuleiro();
    MostrarTabuleiro();
}
