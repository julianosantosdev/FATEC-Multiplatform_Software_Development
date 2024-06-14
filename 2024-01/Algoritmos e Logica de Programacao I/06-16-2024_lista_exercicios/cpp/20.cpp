// EXERCÍCIO 20

#include <iostream>
using namespace std;

string adiciona_caracter(string palavra, int posicao, char caractere) {
    string nova_palavra;

    if (posicao > palavra.length()) {
        nova_palavra = palavra;
        for (int i = palavra.length(); i <= posicao; i++) {
            if (i != posicao - 1) {
                nova_palavra += " ";
            } else {
                nova_palavra += caractere;
            }
        }
    } else {
        for (int i = 0; i < palavra.length(); i++) {
            if (i == posicao - 1) {
                nova_palavra += caractere;
                nova_palavra += palavra[i];
            } else {
                nova_palavra += palavra[i];
            }
        }
    }
    return nova_palavra;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string palavra;
    int posicao;
    char caractere;

    do {
        cout << "Insira a string:" << "\n";
        cin >> palavra;

        cout << "Qual caractere deseja adicionar?" << "\n";
        cin >> caractere;

        cout << "Em qual posição deseja adicionar o caractere (1 a 100)?" << "\n";
        cin >> posicao;

        if (palavra.length() > 100 || posicao >= 100) {
            cout << "Valores inválidos... Tente novamente." << "\n";
        }

    } while (palavra.length() > 100 || posicao >= 100);
    cout << "Nova palavra: " << adiciona_caracter(palavra, posicao, caractere) << "\n";
    return 0;
}
