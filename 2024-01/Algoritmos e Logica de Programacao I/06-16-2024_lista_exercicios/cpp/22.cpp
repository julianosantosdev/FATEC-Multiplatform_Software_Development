// EXERCÍCIO 22

#include <iostream>
#include <string>

using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[10], referencia, contadorMaior = 0, contadorMenor = 0, repeticao = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Informe um valor (" << i + 1 << " de 10): ";
        cin >> numeros[i];
    }

    cout << "Informe um número de referência: " << "\n";
    cin >> referencia;

    cout << "\n";

    cout << "Números MAIORES que " << referencia << ":\n";
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > referencia) {
            cout << numeros[i] << " ";
            contadorMaior++;
        } else if (numeros[i] < referencia) {
            contadorMenor++;
        } else {
            repeticao++;
        }
    }

    cout << "\n";

    if (contadorMaior == 0) {
        cout << "Não há números maiores que " << referencia << "\n";
    }

    cout << "\n";

    cout << "Quantidade de números MENORES que " << referencia << ":\n";
    cout << contadorMenor << "\n";

    cout << "\n";

    cout << "Quantidade de números IGUAIS a " << referencia << ":\n";
    cout << repeticao << "\n";

    return 0;
}
