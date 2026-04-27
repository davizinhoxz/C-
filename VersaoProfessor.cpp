#include <iostream>
using namespace std;

const int numRegistos = 10;
const int numDados = 2;

void mostrarDados(string mostrar1[][numDados], int w) {
    for (w=0; w<numRegistos; w++) {
        cout << "Nome:"  << mostrar1[w][0] << " | " << "Idade: " << mostrar1[w][1] << "\n";
    }

    cout << "\nOlha eu a mostrar!!!! \n GRANDE STOR LUIS SANTOS ";
}


void pedirDados(int numLinha, string dadosX[][numDados], int i) {
    string age;
    string name;

    cout << "\nQual o nome #" << (numLinha + 1) << " : ";
    cin >> dadosX[numLinha][0];
    cout << "\nQual a idade #" << (numLinha + 1) << " : ";
    cin >> dadosX[numLinha][1];
}

int main() {
    string dados[numRegistos][numDados];
    int i;

    for (i=0; i<numRegistos; i++) {
        pedirDados(i, dados, i);
    }
    mostrarDados(dados, i);

    return 0;
}
