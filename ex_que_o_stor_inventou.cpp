#include <iostream>

using namespace std;

const int JOGO = 8;
char torre1[JOGO] = {'D', 'A', 'V', 'I'};
char aux;
int main() {

    for(int i=0; i<JOGO; i++) {
        if(torre1[i] != NULL) {
        aux++;
    }
    }
    for(int i=0; i<aux/2; i++) {
        char letraAntiga = torre1[i];
        torre1[i] = torre1[(aux - 1)-i];
        torre1[(aux - 1)-i] = letraAntiga;
    }

    cout << torre1;
    return 0;
}
