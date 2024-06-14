// EXERCÍCIO 16

#include <iostream>
#include <stdint.h>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    double soma_graos = 0, qtde_inserida = 1;

    for (int i = 1; i <= 64; i++) {
        soma_graos += qtde_inserida;
        qtde_inserida = qtde_inserida * 2;
    }

    cout << soma_graos << " grãos." << "\n";
    return 0;
}
