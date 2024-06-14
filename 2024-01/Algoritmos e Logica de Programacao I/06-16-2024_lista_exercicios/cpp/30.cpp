// EXERCÍCIO 30

#include <iostream>
using namespace std;

bool valorPerfeito(int numero) {
    int acc = 0;
    bool perfeito = false;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            acc += i;
        }
    }

    if (acc == numero) {
        perfeito = true;
    }

    return perfeito;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;

    cout << "|======== NUMERO PERFEITO ========|" << "\n";
    cout << "Qual número deseja verificar se é perfeito?" << "\n";
    cin >> numero;

    if (valorPerfeito(numero) == 1) {
        cout << "O número " << numero << " É perfeito!" << "\n";
    } else {
        cout << "O número " << numero << " NÃO é perfeito!" << "\n";
    }

    return 0;
}
