// EXERCÍCIO 06

#include <iostream>
using namespace std;

void calc_dosagem(int dosagem_mg) {
    int qtde_gotas = dosagem_mg/25;
    cout << "Tomar " << qtde_gotas << " gotas." << "\n";
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int idade;
    float peso;

    cout << "Informe a idade do paciente: " << "\n";
    cin >> idade;

    cout << "Informe o peso do paciente: " << "\n";
    cin >> peso;

    if (idade >= 12) {
        if (peso >= 60) {
            calc_dosagem(1000);
        } else {
            calc_dosagem(875);
        }
    }

    if (idade < 12) {
        if (peso <= 15) {
            calc_dosagem(200);
        } else if (peso > 15 && peso <= 30) {
            calc_dosagem(500);
        } else {
            calc_dosagem(750);
        }
    }

    return 0;
}
