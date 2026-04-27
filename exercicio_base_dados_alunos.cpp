#include <iostream>
using namespace std;

const int DADO = 10;
const int nome = 2;
string baseDeDados[DADO][nome];
string name;
string age;

string exercicio() {
    for (int i = 0; i <= DADO; i++) {
        for (int o = 0; <= nome; o++) {
            baseDeDados[i][o] = ".";
        }
    }
}

string pedir() {

    cout << "Digite o nome de 10 pessoas";
    for(int i=0; i<=DADO; i++) {
    cin >> name;
    }
    cout << "Digite 10 idades";
    cin >> age;

}

int main() {
    exercicio();
}
