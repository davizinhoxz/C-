#include <iostream>
using namespace std;

double salariophora;
int horaspmes;

int main() {
    double salario;
    double salariopano;

    cout << "Me diga quanto voce ganha por hora: ";
    cin >> salariophora;
    cout << "Me diga quantas horas trabalha por mes: ";
    cin >> horaspmes;

    salario = salariophora*horaspmes;
    salariopano = salario*12;

    cout << "Voce ganha " << salario << " por mes e supostamente " << salariopano << " por ano";

    return 0;
}
