#include <iostream>
using namespace std;

int main() {
    int num=0, aux=0;
    cout << "Digite um numero para eu dizer se  e par ou impar: ", "\n";
    cin >> num;
    aux = num / 2;
    if((aux*2) == num) {
        cout << "seu numero e par";
    } else {
        cout << "seu numero e impar";}
    return 0;
}
