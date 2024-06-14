// EXERCÍCIO 14

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero_max, elemento_medio;
    string resultado;

    cout << "Informe o número máximo (deve ser ímpar): ";
    cin >> numero_max;

    for (int i = 1; i <= numero_max; i++) {
        for (int espacoInicial = 1; espacoInicial < i; espacoInicial++) {
            cout << " " << " ";
        }

        for (int j = i; j <= numero_max - i + 1; j++) {
            cout << j << " ";
        }

        for (int espacoFinal = 1; espacoFinal < i; espacoFinal++) {
            cout << " " << " ";
        }

        cout << "\n";

        elemento_medio = (1 + numero_max) / 2;

        if (i == elemento_medio) {
            break;
        }
    }

    return 0;
}
