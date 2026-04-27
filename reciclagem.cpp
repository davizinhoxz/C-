#include <iostream>
using namespace std;

int main() {
    const int JOGADORES = 3;
    string jogador[3];
    jogador[0] = "Joao";
    jogador[1] = "Joana";
    jogador[2] = "Gabriel";


    double kgVidro[JOGADORES];
    double kgPapel[JOGADORES];
    double kgPlastico[JOGADORES];
    double kgPilha[JOGADORES];
    double valorPontoVidro = 0.25;
    double valorPontoPapel = 0.75;
    double valorPontoPlastico = 0.5;
    double valorPontoPilha = 1;
    double pontuacaoFinal[JOGADORES];

    cout << "--------- RECICLAGEM ---------";

    for (int perguntas = 0; perguntas < JOGADORES; perguntas++) {
        cout << "\n\n" << jogador[perguntas] << " Fale quantos kg foram rescolhidos de: ";
        cout << "\nPapel: ";
        cin >>  kgPapel[perguntas];
        cout << "Plastico: ";
        cin >>  kgPlastico[perguntas];
        cout << "Vidro: ";
        cin >>  kgVidro[perguntas];
        cout << "pilha: ";
        cin >> kgPilha[perguntas];
        cout << "\n-------- PONTUACAO --------";
    }

    for (int i = 0; i < JOGADORES; i++) {
        pontuacaoFinal[i] = (kgPapel[i] * valorPontoPapel) + (kgPlastico[i] * valorPontoPlastico) + (kgVidro[i] * valorPontoVidro) + (kgPilha[i] * valorPontoPilha);
        cout << "\n\nA pontuacao final do/a " << jogador[i] << " foi: " << pontuacaoFinal[i];
    }
}
