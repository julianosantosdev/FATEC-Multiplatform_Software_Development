// EXERCÍCIO 26

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand (time(NULL));

    int matriz[10][10], maiorValor = 0, lin, col;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 899 + 100;
            cout << matriz[i][j] << "      ";
        }
        cout << "\n";
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                lin = i;
                col = j;
            }
        }
    }

    cout << "\n";

    cout << "Maior valor é " << maiorValor << ". Local: " << "linha " << lin + 1 << ", coluna " << col + 1<< "\n";

    return 0;
}
