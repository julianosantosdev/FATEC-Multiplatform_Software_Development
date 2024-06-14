// EXERCÍCIO 23

#include <iostream>
#include <vector>

using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int lista7[100], vetor_posicao = 0, i = 0;

    while (vetor_posicao < 100) {
        if ((i % 7 != 0) || (i + 3 % 10) == 0) {
            lista7[vetor_posicao] = i;
            cout << lista7[vetor_posicao] << " ";
            vetor_posicao++;
        }
        i++;
    }

    cout << "\n";

    return 0;
}
