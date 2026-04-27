//----------TIPO-1----------

/*#include <iostream>
using namespace std;

void mudarXY (int *x1, int *y1) {
    int professorLegal = 0;
    // int minhaNotaFinal = 20;

    professorLegal = *x1;
    *x1 = *y1;
    *y1 = professorLegal;
}

int main() {
    int x = 10, y = 2, z=25;
    mudarXY(&x, &y, &z);
    cout << "x: " << x;
    cout << "\ny: " << y;
    cout << "\nz: " << z;
}*/

//----------TIPO-2----------

#include <iostream>
using namespace std;

void mudarXY (int &x1, int &y1) {
    int professorLegal = 0;
    // int minhaNotaFinal = 20;

    professorLegal = x1;
    x1 = y1;
    y1 = professorLegal;
}

int main() {
    int x = 1, y = 2, z = 3, w = 4;
    mudarXY(x, w);
    mudarXY(w, z);
    mudarXY(z, y);
//  TIPO 2
/*  mudarXY(w, z);
    mudarXY(y, z);
    mudarXY(x, y);*/


    cout << "x: " << x;
    cout << "\ny: " << y;
    cout << "\nz: " << z;
    cout << "\nw: " << w;
}

// x=w, y=x, z=y, w=z;
