// EXERCÍCIO 10

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int ano;

    cout << "Informe o ano para saber se ele é bissexto: " << "\n";
    cin >> ano;

    if (ano % 4 == 0) {
        cout << "O ano de " << ano << " é bissexto!" << "\n";
    } else {
        cout << "O ano de " << ano << " não é bissexto!" << "\n";
    }

    return 0;
}
