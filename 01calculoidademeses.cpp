#include <iostream>
using namespace std;

int main() {
    int ano;
    int meses;

    cout << "Me diga um numero de anos para eu lhe devolver em meses: ";
    cin >> ano;

    meses  = ano*12;

    cout << ano << " anos em meses e igual a " << meses << " meses";

    return 0;
}
