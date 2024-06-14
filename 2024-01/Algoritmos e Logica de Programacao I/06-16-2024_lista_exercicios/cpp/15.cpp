// EXERCÍCIO 15

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int max_numeros_fibonacci, num_anterior = 0, num_anterior_anterior = 1, atual;

    cout << "Informe a quantidade de números da série Fibonacci: " << "\n";
    cin >> max_numeros_fibonacci;

    for (int i = 0; i < max_numeros_fibonacci; i++) {
        if (i <= 1) {
            cout << i << " ";
        } else {
            atual = num_anterior + num_anterior_anterior;
            cout << atual << " ";
            num_anterior = num_anterior_anterior;
            num_anterior_anterior = atual;
        }
    }

    cout << "\n";

    return 0;
}
