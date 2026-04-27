#include <iostream>
using namespace std;
int w;
int x;
int y;
int z;
int res;
string condicao;
int quantidade;

double somar(int a, int b) {
    res = a + b;
    return res;
}

int main() {
    cout << "Digite 2 numeros pra eu somar eles: \n";
    cout << "Numero 1: ";
    cin >> w;
    cout << "\nNumero 2: ";
    cin >> x;

    cout << "voce deseja adicionar mais 1 ou 2 numeros? responda com sim ou nao: ";
    cin >> condicao;
    if (condicao == "sim") {
        cout << "deseja adicionar 1 ou 2: ";
        cin >> quantidade;
        if (quantidade == 1) {
            cout << "\nNumero 3: ";
            cin >> y;
            cout << "\nEntao e = " << somar(w, x) + y;
        } else if (quantidade == 2) {
            cout << "\nNumero 4: ";
            cin >> z;
            cout << "\nEntao e = " << somar(w, x) + z;
        }

    } else if (condicao == "nao") {
        cout << "Entao e = " << somar(w, x);
    }

    return 0;
}
