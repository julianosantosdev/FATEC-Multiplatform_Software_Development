// EXERCÍCIO 19

#include <iostream>
using namespace std;

string remove_caracter(string palavra, int posicao) {
    string nova_palavra;

    for (int i = 0; i < palavra.length(); i++) {
        if (i != posicao - 1) {
            nova_palavra += palavra[i];
        }
    }

    return nova_palavra;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string palavra;
    int posicao;

    do {
        cout << "Insira a string:" << "\n";
        cin >> palavra;

        cout << "Em qual posição deseja remover o caractere (1 a " << palavra.length() << ")?" << "\n";
        cin >> posicao;

        if (palavra.length() > 100 || posicao > palavra.length()) {
            cout << "Valores inválidos... Tente novamente." << "\n";
        }

    } while (palavra.length() > 100 || posicao > palavra.length());

    cout << "Nova palavra: " << remove_caracter(palavra, posicao) << "\n";

    return 0;
}
