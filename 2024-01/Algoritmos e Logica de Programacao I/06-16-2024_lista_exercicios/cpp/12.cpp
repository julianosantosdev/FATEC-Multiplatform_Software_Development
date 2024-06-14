// EXERCÍCIO 12

#include <iostream>
#include <math.h>
using namespace std;

int contar_notas(int valor_nota, int valor) {
    int numero_notas = floor(valor/valor_nota);
    int valor_atualizado = valor - numero_notas * valor_nota;

    cout << "NOTAS DE " << valor_nota << ": " << numero_notas << "\n";

    return valor_atualizado;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int valor_saque;

    cout << "Qual valor a ser sacado? " << "\n";
    cin >> valor_saque;

    if (valor_saque > 600 || valor_saque < 10) {
        cout << "Valor de saque inválido!" << "\n";
        cout << "Min R$ 10,00 e máximo de R$ 600,00)!" << "\n";
        return 0;
    }

    if (valor_saque >= 100) {
        valor_saque = contar_notas(100, valor_saque);
    }

    if (valor_saque >= 50) {
        valor_saque = contar_notas(50, valor_saque);
    }

    if (valor_saque >= 10) {
        valor_saque = contar_notas(10, valor_saque);
    }

    if (valor_saque >= 5) {
        valor_saque = contar_notas(5, valor_saque);
    }

    if (valor_saque >= 1) {
        valor_saque = contar_notas(1, valor_saque);
    }

    return 0;
}
