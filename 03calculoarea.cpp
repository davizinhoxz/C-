#include <iostream>
using namespace std;

double pi=3.1416;

int main() {
    double raio;
    double area;
    cout << "Me diga um raio para eu lhe devolver a area do circulo: ";
    cin >> raio;

    area = pi*raio*raio;

    cout << "A area do circulo e de: " << area;

    return 0;
}
