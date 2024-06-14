// EXERCÍCIO 08

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float ladoA, ladoB, ladoC;

    cout << "Insira o valor do lado A " << "\n";
    cin >> ladoA;

    cout << "Insira o valor do lado B " << "\n";
    cin >> ladoB;

    cout << "Insira o valor do lado C " << "\n";
    cin >> ladoC;

    if ((ladoA + ladoB > ladoC) && (ladoB + ladoC > ladoA) && (ladoA + ladoC > ladoB)){
        if (ladoA == ladoB && ladoB == ladoC) {
            cout << "Triângulo Equilátero" << "\n";
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            cout << "Triângulo Isósceles" << "\n";
        } else {
            cout << "Triângulo Escaleno" << "\n";
        }
    } else {
        cout << "Não é possível formar um triângulo!" << "\n";
    }

    return 0;
}
