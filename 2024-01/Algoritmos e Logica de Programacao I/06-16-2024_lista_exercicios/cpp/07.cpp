// EXERCÍCIO 07

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1, n2, n3;

    cout << "Insira o primeiro número (N1) " <<  "\n";
    cin >> n1;

    cout << "Insira o segundo número (N2) " <<  "\n";
    cin >> n2;

    cout << "Insira o terceiro número (N3) " <<  "\n";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3) {
        if (n2 >= n3) {
            cout << n1 << ", " << n2 << ", " << n3 << "\n";
        } else {
            cout << n1 << ", " << n3 <<  ", " << n2 << "\n";
        }
    } else if (n2 >= n1 && n2 >= n3) {
        if (n1 >= n3) {
            cout << n2 << ", " << n1 << ", " << n3 << "\n";
        } else {
        cout << n2 << ", " << n3 << ", " << n1 << "\n";
        }
    } else {
        if (n1 >= n2) {
            cout << n3 << ", " << n1 << ", " << n3 << "\n";
        } else {
            cout << n3 << ", " << n2 << ", " << n1 << "\n";
        }
    }

    return 0;
}
