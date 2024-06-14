// EXERCÍCIO 24

#include <iostream>
using namespace std;

bool procura_repeticao(int numero, int lista[], int index) {
    bool repeticao = false;

    for (int j = 0; j <= index; j++) {
        if (numero == lista[j] && index != j) {
            repeticao = true;
            break;
        }
    }

    return repeticao;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeros[10], verificacao_repetido;

    for (int i = 0; i < 10; i++) {
        cout << "Insira um numero (" << i + 1 << " de 10): ";
        cin >> verificacao_repetido;

        while (procura_repeticao(verificacao_repetido, numeros, i)) {
            cout << "Número repetido. Insira valor diferente: ";
            cin >> verificacao_repetido;
        }

        numeros[i] = verificacao_repetido;
    }

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n";

    return 0;
}
