#include <iostream>
using namespace std;
int main() {
    int numerosTotal = 5, aux = 0;
    int numeros[numerosTotal] = {9, 2, 0, 6, 4};

    //mostrat array
    for (int i=0; i<=(numerosTotal-1); i++) {
        cout << " | ";
        cout << numeros[i];
    }
    cout << "\n";
    //passo 2
    for (int i=numerosTotal-1; i>=0; i--) {
        cout << " | ";
        cout << numeros[i];
    }
    cout << "\n";
    //passo 3
    for (int i=(numerosTotal -1); i>=(numerosTotal/2); i--) {
        cout << " | ";
        cout << numeros[i];
        if(i != ((numerosTotal - 1) - i))
        {
            cout << " | ";
            cout << numeros[(numerosTotal - 1) - i];
        }
    }
    cout << "\n";
    //passo 4
    for (int i=(numerosTotal -1); i>=(numerosTotal/2); i--) {
        cout << " | ";
        cout << numeros[(numerosTotal - 1) - i];
        if(i != ((numerosTotal - 1) - i))
        {
            cout << " | ";
            cout << numeros[i];
        }
    }
    cout << "\n";
    //passo 5 = 0 | 2 | 6 | 9 | 4
    for (int i=(numerosTotal -1); i>=(numerosTotal/2); i--) {
        cout << " | ";
        cout << numeros[(numerosTotal - 1) - i];
        if(i != ((numerosTotal - 1) - i))
        {
            cout << " | ";
            cout << numeros[i];
        }
    }

    /**ex extra ter que pedir ao utilizador mais 5 numeros,
    temos que adicionar esse numeros ao fim do nosso array,
    criar dois arrais um de numeros pares e outro de numeros impares,
    verificar os numeros que temos no nosso array principal, e colocar cada numero no seu devido array
    mostrar oque teve em cada um**/

    //return 0;
}
