#include <iostream>
using namespace std;

int num;
int aux[10];
int tabuada;

int main() {
    cout << "Me diga um numero para eu lhe dar a tabuada ate o 10: ";
    cin >> num;

    for(int i=1; i<10; i++) {
        tabuada = num * aux[i+1];
    }
    cout << "A tabuada do seu numero e: \n" << tabuada;
}
