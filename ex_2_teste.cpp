#include <iostream>
using namespace std;
int w;
int x;
int y;
int z;
int res;

double somar(int a, int b, int c, int d) {
    res = a + b + c + d;
    return res;
}

int main() {
    cout << "Digite 4 numeros pra eu somar os quatro: \n";
    cout << "Numero 1: ";
    cin >> w;
    cout << "\nNumero 2: ";
    cin >> x;
    cout << "\nNumero 3: ";
    cin >> y;
    cout << "\nNumero 4: ";
    cin >> z;

    cout << "= " << somar(w, x, y, z);

    return 0;
}
