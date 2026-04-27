#include <iostream>

int soma(int n1, int n2) {
    return (n1 + n2);
}
int subtracao(int n1, int n2) {
    return (n1 - n2);
}
int divisao(int n1, int n2) {
    return (n1 / n2);
}
int multiplicacao(int n1, int n2) {
    if (n2 ==0) {
        return 0;
    }
        return (n1 / n2);
}

int main() {
    std::cout << "/n A soma da = " << soma(15,5);
    std::cout << "/n A subtracao da = " << subtracao(15,5);
    std::cout << "/n A divisao da = " << divisao(15,5);
    std::cout << "/n A multiplicacao da = " << multiplicacao(15,5);

    return 0;
}
