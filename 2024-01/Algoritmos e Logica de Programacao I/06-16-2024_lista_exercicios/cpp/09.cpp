// EXERCÍCIO 09

#include <iostream>
#include <math.h>
using namespace std;

void bashkara (float a, float b, float delta) {
    float x1, x2;

    if (delta == 0) {
        x1 = (-b + sqrt(delta)) / 2*a;
        cout << x1 << "\n";
    } else {
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) / 2*a;
        cout << x1 << " e " << x2 << "\n";
    }
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float a, b, c;

    cout << "******** CALCULO DE EQUAÇÃO 2o GRAU ********" << "\n";
    cout << "Formato ax² + bx + c" << "\n";

    cout << "Insira o valor de A: ";
    cin >> a;

    if (a == 0) {
        cout << "A equação não é de segundo grau... " << "\n";
        return 0;
    }

    cout << "Insira o valor de B: ";
    cin >> b;

    cout << "Insira o valor de C: ";
    cin >> c;


    // DELTA
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "A equação não possui raízes reais..." << "\n";
        return 0;
    } else if (delta == 0) {
        cout << "A equação possui apenas uma raiz real..." << "\n";
        bashkara(a, b, delta);
    } else {
        bashkara(a, b, delta);
    }

    return 0;
}
