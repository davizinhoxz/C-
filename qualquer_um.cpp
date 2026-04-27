#include <iostream>
#include <string>
using namespace std;

/**int main() {
    string cars[4] = {"Ferrari, ", "BMW, ", "Porsche e ", "Mercedes"};
    for (int i=0; i<4; i++) {
        cout << cars[i];
    }
} **/


/**int main() {
    int fatorial = 1;
    int result

    cout << "Digite um numero para eu lhe devolver seu fatorial: ";
    cin >> fatorial;

    for (int i=0; i<fatorial; i--) {
        result = result * fatorial ;
    }
    return result;
} **/
int main() {
    int numerosTotal = 5, aux = 0;
    int numeros[numerosTotal] = {9, 2, 0, 6, 4};
    //controlar o array
    for (int i=0; i<(numerosTotal-1); i++) {
        for (int j=(i+1); j < (numerosTotal); j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    //mostrar o meu array
    for (int i=0; i<numerosTotal; i++) {
        if (i > 0) {
            cout << " - ";
        }
        cout << numeros[i];
    }
    cout << "\n";
    //return 0;
}
