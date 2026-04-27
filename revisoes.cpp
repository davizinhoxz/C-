#include <iostream>
#include <string>
using namespace std;

const int PALAVRA = 8;
char a1[PALAVRA] = {'L', 'U', 'I', 'S'};
char a2[PALAVRA];

void mostrarPalavra() {
    for (int i=PALAVRA; i>0; i--) {
        if (a1[i-1] != NULL) {
            cout << a1[i-1] << "\n";
        } else {
            cout << "-" << "\n";
        }
    }
}

int main () {
    mostrarPalavra();
}
