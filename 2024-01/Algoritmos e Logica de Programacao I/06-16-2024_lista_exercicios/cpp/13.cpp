// EXERCÍCIO 13

#include <iostream>
using namespace std;

int verificador_digito(string cpf, int limite) {
    int acc = 0;
    int verificador = limite + 1;

    for (int i = 0; i < limite; i++) {
        acc += (cpf[i] - '0') * verificador;
        verificador--;
    }

    int resto =  acc % 11;
    if (resto < 2) {
        return 0;
    } else {
        return (11 - resto);
    }
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string cpf;
    int verificador1, verificador2;

    cout << "************* VALIDADOR DE CPF *************" << "\n";
    cout << "Insira o número do CPF (somente números): ";
    cin >> cpf;

    // PRIMEIRA VERIFICAÇÃO:
    verificador1 = verificador_digito(cpf, 9);

    // SEGUNDA VERIFICAÇÃO:
    verificador2 = verificador_digito(cpf, 10);

    if ((cpf[9] - '0') == verificador1 && (cpf[10] - '0') == verificador2) {
        cout << "CPF válido!" << "\n";
    } else {
        cout << "CPF inválido!" << "\n";
    }

    return 0;
}
