// EXERCÍCIO 27

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int pulsacoesDia[24][4], pulsacaoMediaCamas[4];
    float camaPulsacaoMediaMaior = 0, pulsacaoMedia = 0;

    // Captura de dados
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Insira a pulasação do paciente." << "\n";
            cout << "Cama " << j + 1 << " hora: " << i + 1 << "\n";
            cin >> pulsacoesDia[i][j];
        }
        cout << "\n";
    }

    // Media dos pacientes.
    for (int j = 0; j < 4; j++) {
        int acc = 0;

        for (int i = 0; i < 24; i++) {
                acc += pulsacoesDia[i][j];
        }
        pulsacaoMediaCamas[j] = acc/24;
        cout << "Média pulsações CAMA " << j + 1 << ": " << pulsacaoMediaCamas[j] << "\n";
    }

    // Cama com maior média
    for (int i = 0; i < 4; i++) {
        if (pulsacaoMediaCamas[i] > pulsacaoMedia) {
            pulsacaoMedia = pulsacaoMediaCamas[i];
            camaPulsacaoMediaMaior = i;
        }
    }

    cout << "Cama com maior pulsação média: " << camaPulsacaoMediaMaior + 1 << "\n";

    return 0;
}
