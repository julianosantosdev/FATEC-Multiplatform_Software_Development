// EXERCÍCIO 21

#include <iostream>
#include <string>


using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string pesquisa;
    bool resultado;

    string palavras[10] = {
        "molusco", "rato", "arara", "cavalo", "galinha", "mosquito", "cachorro", "girafa", "golfinho", "ouriço"
    };

    cout << "Qual palavra deseja pesquisar?" << "\n";
    cin >> pesquisa;

    for (int i = 0; i < 10; i++) {
        if (pesquisa == palavras[i]) {
            cout << "Resultado encontrado na posição " << i << "\n";
            resultado = true;
            break;
        } else {
            resultado = false;
        }
    }

    if (!resultado) {
        cout << "Pesquisa não encontrou resultados." << "\n";
    }



    return 0;
}
