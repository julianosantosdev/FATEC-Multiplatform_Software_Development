// EXERCÍCIO 17

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float total = 0, valor_produto = 0, valor_recebido, troco;
    bool continuar = true;

    while (continuar) {
        cout<< "LOJAS TABAJARA" << "\n";
        int numero_produto = 1;
        do  {

            cout << "Produto " << numero_produto << ": R$ ";
            cin >> valor_produto;
            total += valor_produto;
            numero_produto++;
        } while (valor_produto != 0);

        cout << "***********************" << "\n";
        cout << "TOTAL: R$ " << total << "\n";

        do {
            cout << "Valor recebido: R$ ";
            cin >> valor_recebido;

            if (valor_recebido < total) {
                cout << "Valor recebido é menor que o total. Informe valor correto!" << "\n";
            }

        } while (valor_recebido < total);

        troco = valor_recebido - total;

        cout << "TROCO: R$ " << troco << "\n" << "\n";
    }

    return 0;
}
