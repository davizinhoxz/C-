#include <iostream>
using namespace std;
int num;

int exponencial(int i, int n) {
    if (n > 0) {
        return i*exponencial(i, n-1);
    } else {
        return 1;
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
       return 1;
    }
    else if (n>=2) {
        return (fibonacci(n-1)) + (fibonacci(n-2));
    }
    else if (n<0) {
        return (exponencial(-1, (n*(-1)) + 1) * fibonacci(n * (-1)));
    }
}

int main () {
    cout << "Digite um numero para eu lhe dar seu fibonacci: ";
    cin >> num;

    cout << "\nO seu fibonacci e " << fibonacci(num);
}
