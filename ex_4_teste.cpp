#include <iostream>
using namespace std;

string juntar(char letroes[], int tamanho ) {
    string textao = letroes;
}

int main() {
    string letras;
    const int LETROES = 100000;
    char letras[LETROES];
    cout << "\nDigite as letras e quando quiser parar digite 0 ";
    for(int i=0; i<LETROES; i++) {
        cin >> letras;
        if (letras != '0') {
            cout << letras(LETROES);
        } else {
            break;
        }
        cout << juntar(letras, i);
    }

    return 0;
}
