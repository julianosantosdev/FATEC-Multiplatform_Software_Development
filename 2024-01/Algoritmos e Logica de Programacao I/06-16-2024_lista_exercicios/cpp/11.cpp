// EXERCÍCIO 11
#include <iostream>
#include <string>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int numero, centenas, dezenas, unidades;
    string mensagem;

    cout << "Informe um numero maior que zero:" << "\n";
    cin >> numero;

    if (numero >= 1000 || numero == 0) {
        cout << "Número inválido!!" << "\n";
        return 0;
    }

    if (numero >= 100) {
        centenas = (numero - (numero % 100)) / 100;
        numero = numero - centenas*100;

        if (centenas > 1) {
            mensagem = to_string(centenas) + " centenas, ";
        } else {
            mensagem = to_string(centenas) + " centena, ";
        }
    }

    if (numero < 100) {
        dezenas = (numero - (numero % 10)) / 10;
        numero = numero - dezenas*10;
        unidades = numero;

        if (dezenas > 1) {
            mensagem = mensagem + to_string(dezenas) + " dezenas e ";
        } else {
            mensagem = mensagem + to_string(dezenas) + " dezena e ";
        }
    }

    if (numero < 10) {
        unidades = numero;

        if (unidades > 1) {
            mensagem = mensagem + to_string(unidades) + " unidades";
        } else {
            mensagem = mensagem + to_string(unidades) + " unidade";
        }
    }

    cout << mensagem << "\n";

    return 0;
}
