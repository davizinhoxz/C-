#include <iostream>
#include <stdio.h>
#include <ctime> // Importar a libraria ctime

using namespace std;

time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);
int anoAtual = datetime.tm_year + 1900;
int mesAtual = datetime.tm_mon + 1;
int diaAtual = datetime.tm_mday;

string grauIdade(int idade) {
    string resposta = "";
    if (idade >= 0 && idade <=1) {
        resposta = "Recem-Nascido";
    } else if (idade > 1 && idade <=3) {
        resposta = "Bebe";
    } else if (idade > 3 && idade <=12) {
        resposta = "Crianca";
    } else if (idade > 12 && idade <=18) {
        resposta = "Adolescente";
    } else if (idade > 18 && idade <=50) {
        resposta = "Adulto";
    } else if (idade > 50) {
        resposta = "Velhote !!!";
    } else {
        resposta = "Espera que tu ainda vai nascer fi de cristo";
    }
    return resposta;
}
int calculo() {
    AnoNasceu = anoAtual - idadeX;
}

int main () {
    //cout << grauIdade(6);
    char op = '0';
    int idadeX = 0;
    do {
        cout << diaAtual << " / " << mesAtual << " / " << anoAtual << "\n\n";
        cout << "O que pretende fazer ? \n";
        cout << "  1 - Saber o grau da sua idade \n";
        cout << "  2 - Saber em que ano nasceu \n";
        cout << "  3 - Quantos anos terei ! \n\n";
        cout << "  0 - Sair do Progama \n\n";
        cout << "O que pretende fazer: ";
        cin >> op;

        /** verificar o que vai fazer**/
        switch (op) {
            case '1':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "\n\n Voce parece ser um " << grauIdade(idadeX) << "\n\n";
                break;
            case '2':
                cout << "\n\n Diga quantos voce tem: ";
                cin >> idadeX;
                cout << "Se nasceu entre o dia 1.janeiro e 11-dezembro nasceu em " << AnoNasceu << "\nSe nasceu entre o dia 12-dezembro e 31-dezembro nasceu em" <<
                break;
            case '3':
                cout << "\n\nDiga qual a sua idade: ";
                cin >> idadeX;
                cout << "\n\nDiga o ano em que quer saber sua idade: ";
                break;
            default:
                break;
        }
    } while (op != '0');

    cout << "Saindo do programa ... xauzao";

    return 0;
}
