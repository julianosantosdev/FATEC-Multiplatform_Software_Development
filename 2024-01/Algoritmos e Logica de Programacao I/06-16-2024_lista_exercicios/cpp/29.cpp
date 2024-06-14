// EXERCÍCIO 29

#include <iostream>
using namespace std;

string procuraCaracter (string palavra, char caractereProcurado) {
    int posicaoCaracter;
    int contador = 0;
    string resultado = "";
    for (int i = 0; i < palavra.length(); i++) {
        if (palavra[i] == caractereProcurado) {
            resultado += i + '0';
        }
    }

    return resultado;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string palavra;
    char caractereProcurado;

    cout << "Informe a palavra a ser pesquisada: ";
    cin >> palavra;

    cout << "Informe o carácter a ser encontrado: ";
    cin >> caractereProcurado;

    string pesquisa = procuraCaracter(palavra, caractereProcurado);

    if (pesquisa.length() == 0) {
        cout << "Caracter procurado não existe!!" << "\n";
    } else {
        for(int i = 0; i < pesquisa.length(); i++) {
            cout << "Carácter " << "|" << caractereProcurado << "|" << " na posição: " << (pesquisa[i] + 1) - '0' << "\n";
        }
    }

    return 0;
}
