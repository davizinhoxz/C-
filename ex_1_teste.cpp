#include <iostream>
using namespace std;
int x;
int y;
int res;
int op;

double somar(int a, int b) {
    res = a + b;
    return res;
}

double subtracao(int c, int d) {
    res = c - d;
    return res;
}

double multiplicar(int e, int f) {
    res = e * f;
    return res;
}

double dividir(int g, int h) {
    res = g / h;
    return res;
}


int main() {
    cout << "Escolha qual operacao fazer:";
    cout << "\n1 - Somar \n2 - Subtrair \n3 - multiplicar \n4 - dividir";
    cout << "\nQual? ";
    cin >> op;

    cout << "\n\nDigite dois numeros para fazer uma operacao: ";
    cin >> x;
    cout << "\nDigite o segundo numero: ";
    cin >> y;

    if (op == 1) {
        cout << "= " << somar(x,y);
    } else if (op == 2) {
        cout << "= " << subtracao(x,y);
    } else if (op == 3) {
        cout << "= " << multiplicar(x,y);
    } else if (op == 4) {
        cout << "= " << dividir(x,y);
    }
    return 0;
}
