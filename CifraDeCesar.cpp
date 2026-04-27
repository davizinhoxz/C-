#include <iostream>
using namespace std;

int main() {
    string txt;
    char alfabeto[23] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    char encriptacao[23] = {'d', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z', 'a', 'b', 'c'};
    int quantidadeLetrasCada[26];

    cout << "---------- Cifra de Cesar ----------";
    cout << "\n\nEscreva uma frase de ate 200 caracteres para que seja mostrada a quantidade de vezes que cada letra do alfabeto aparecem nele: \n\n";
    cin >> txt;

    if (txt.length() > 200) {
        cout << "\nimpossivel fazer, passou de 200 chars";
    }

    for (int i=0; i<txt.length(); i++) {
        alfabeto[i] = encriptacao[i];
        cout << txt[i];
    }
}

