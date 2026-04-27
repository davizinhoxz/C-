#include <iostream>
using namespace std;

int exponencial(int i, int n) {
    if (n > 0) return i*exponencial(i, n-1);
    return 1;
}

int fatorial(int numeroFatorial) {
    if (numeroFatorial > 0) return numeroFatorial * fatorial(numeroFatorial - 1);
    return 1;
}

int main() {
    int i=2, n=5, numeroFatorial=5;
        cout << "         ----------EXPONENCIAL---------\n";
    cout << exponencial(i, n);
    cout << "\n----------FATORIAL---------\n";
    cout << fatorial(numeroFatorial);

    return 0;
}
