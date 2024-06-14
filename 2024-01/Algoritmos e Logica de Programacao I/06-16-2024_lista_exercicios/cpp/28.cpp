// EXERCÍCIO 28

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void lerMatriz(int matriz[][5]) {
    srand (time(NULL));
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << "\n";
    }
}

void gerarMatriz(int matriz[][5]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 20 - 1;
            cout << matriz[i][j] << "  ";
        }
        cout << "\n";
    }
}

void matrizMultiplicaL1L2() {
    int matriz[2][5];
    gerarMatriz(matriz);

    for(int j = 0; j < 5; j++) {
        int multiplica = 0;
        multiplica = matriz[0][j] * matriz[1][j];
        matriz[1][j] = multiplica;
    }

    cout << "\n";

    lerMatriz(matriz);

}

void matrizSomaL1L2() {
    int matriz[2][5];
    gerarMatriz(matriz);

    for(int j = 0; j < 5; j++) {
        int soma = 0;
        soma = matriz[0][j] + matriz[1][j];
        matriz[1][j] = soma;
    }

    cout << "\n";
    lerMatriz(matriz);
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Soma de Lin1 + lin2" << "\n";
    matrizSomaL1L2();

    cout << "\n";

    cout << "Multiplicação de Lin1 + lin2" << "\n";
    matrizMultiplicaL1L2();
    return 0;
}
