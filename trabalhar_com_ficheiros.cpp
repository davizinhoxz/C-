#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Cria e abre ficheiro de texto
    ofstream MyFile("filename.txt");

    // Escreve no ficheiro
    MyFile << "Tentativa n3";

    // Fecha o ficheiro
    MyFile.close();

    // Cria uma string de texto
    string myText;

    // Le o texto do arquivo
    ifstream MyReadFile("lixo.txt");

    // Usa um while para achar com a linha, funcao para ler linha do arquivo
    while (getline (MyReadFile, myText)) {
        cout << myText << "\n";
    }

    // Fecha o ficheiro
    MyFile.close();

    string bio;
    cout << "Diz o teu nome completo: ";
    //cin >> bio;
    getline(cin, bio);
    cout << bio;

    return 0;
}
