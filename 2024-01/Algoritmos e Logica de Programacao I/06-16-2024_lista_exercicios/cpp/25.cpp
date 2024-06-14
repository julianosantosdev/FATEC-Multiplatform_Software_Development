// EXERCÍCIO 25

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int lin, col;

    cout << "Insira a quantidade de linhas da matriz: ";
    cin >> lin;

    cout << "Insira a quantidade de colunas da matriz: ";
    cin >> col;

    int matriz[lin][col], matriz_transposta[col][lin];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Insira o valor [" << i << "][" << j <<"]";
            cin >> matriz[i][j];
        }
    }

    //transposição
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    cout << "MATRIZ " << lin << "x" << col << "\n";
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    cout << "MATRIZ TRANSPOSTA " << col << "x" << lin << "\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < lin; j++) {
            cout << matriz_transposta[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
