#include <iostream>
using namespace std;

const int linhas=5, colunas=7;
char tabuleiro[linhas][colunas];
string jogador1, jogador2;
int quemJoga = 0;
char fichaJogo[2] {'O', 'X'};
bool pecaColocada = false;

void iniciarTabuleiro() {
    for (int x=0; x<linhas; x++) {
        for (int y=0; y<colunas; y++) {
            tabuleiro[x][y] = '-';
        }
    }
}

void mostrarTabuleiro() {
    for (int x=0; x<linhas; x++) {
        for (int y=0; y<colunas; y++) {
            cout << " | " << tabuleiro[x][y];
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

void tabuleiroCheio() {

}

int main() {
    int jogada;

    iniciarTabuleiro();
    //mostrarTabuleiro();
    while (true) {
        mostrarTabuleiro();
        cout << "\n Em que coluna pretende jogar " << fichaJogo[quemJoga] << " (numero de 0 a 6) : ";
        cin >> jogada;

        pecaColocada = false;
        if (jogada >=0 && jogada < colunas) {
            int aux = (linhas - 1);
            while(aux >= 0) {
                if (tabuleiro[aux][jogada] == '-') {
                    tabuleiro[aux][jogada] = fichaJogo[quemJoga];
                    pecaColocada = true;
                    break;
                }
                aux--;
            }
            if (pecaColocada) {
                if (quemJoga == 0) {
                    quemJoga = 1;
                } else {
                    quemJoga = 0;
                }
            }
        }
    }
    return 0;
}
