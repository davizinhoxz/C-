#include <iostream>
using namespace std;

int soma = 0;

int main() {
    int numeros[3];

    for (int i=0; i<3; i++) {
        cout << "Me de tres numeros para eu dar a media. \n ";
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];

        soma = soma + numeros[i];
    }

    float media = soma / 3.0;

    cout << "\nMedia: " << media;

    return 0;
}
