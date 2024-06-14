// EXERCÍCIO 02

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1, n2, n3, resultado1, resultado2, resultado3;

    cout << "Insira um número inteiro (N1)..." << endl;
    cin >> n1;

    cout << "Insira outro número inteiro (N2)..." << endl;
    cin >> n2;

    cout << "Insira um número decimal (N3)..." << endl;
    cin >> n3;

    resultado1 = (2 * n1) * (n2 / 2);
    resultado2 = (3 * n1) + (n3);
    resultado3 = (n3 * n3 * n3);

    cout << "Produto do dobro de N1 com metade N2 = " << resultado1 << "\n";
    cout << "Soma do triplo de N1 com N3 = " << resultado2 << "\n";
    cout << "N3 ao cubo = " << resultado3 << "\n";

    return 0;
}
