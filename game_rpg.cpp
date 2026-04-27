#include <iostream>
using namespace std;

int func1(int num1) {
    num1 / 2;
    func4(num1);
    return num1;
}

int func2(int num2) {
    num2 * 3;
    func1(num2)
    return num2;
}

double func3(double num3) {
    num3 / 3;
    func1(num3)
    return num3;
}

int func4(int num4) {
    num4 * 4;
    func3(num4);
    func2(num4);
    return num4;
}

int main() {
    int n;

    cout << "------- PASSOS -------\n";
    cout << "\n1 Passo (0-100) \n2 passo (101++) \n3 Passo (-1 ate -100) \n4 Passo (-101--)";
    cout << "\n\nDigite um numero: ";
    cin >> n;

    if (n>=0 && n<= 100) {
        cout << func1(n);
    } else if (n>100) {
        cout << func2(n);
    } else if (n>= -100 && <=-1) {
        cout << func3(n);
    } else if (n<-101) {
        cout << func4(n)
    }

    return 0;
}
