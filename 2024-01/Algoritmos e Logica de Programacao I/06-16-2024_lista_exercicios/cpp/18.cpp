// EXERCÍCIO 18

#include <iostream>
using namespace std;

void calc_votos() {
    int
    votos_cand1 = 0,
    votos_cand2 = 0,
    votos_cand3 = 0,
    votos_cand4 = 0,
    votos_nulo = 0,
    votos_branco = 0,
    votos_total = 0,
    opcao;
    int votos_auto = 0;

    string mensagem = "Voto registrado!";

    do {
        cout << "|============= ELEIÇÃO PRESIDENCIAL ============= |" << "\n";
        cout << "| 1 - TÍZIO                                       |" << "\n";
        cout << "| 2 - CAIO                                        |" << "\n";
        cout << "| 3 - SEMPRÔNIO                                   |" << "\n";
        cout << "| 4 - BELTRANO                                    |" << "\n";
        cout << "| 5 - NULO                                        |" << "\n";
        cout << "| 6 - BRANCO                                      |" << "\n";
        cout << "|================================================ |" << "\n";

        do {
            cout << "Para votar, escolha um número: " << "\n";
            cin >> opcao;

            switch(opcao) {
                case 1:
                    votos_cand1++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 2:
                    votos_cand2++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 3:
                    votos_cand3++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 4:
                    votos_cand4++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 5:
                    votos_nulo++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 6:
                    votos_branco++;
                    cout << mensagem << "\n" << "\n";
                    break;

                case 0:
                    cout << "Encerrando Votação..." << "\n" << "\n";
                    break;

                default:
                    cout << "Opção Inválida!" << "\n";
                    break;
            }

        } while (opcao > 6 || opcao != 0);

    } while (opcao != 0);

    votos_total = votos_cand1 + votos_cand2 + votos_cand3 + votos_cand4 + votos_branco + votos_nulo;
    float nulos_sobre_validos = (1.0f * votos_branco / votos_total) * 100;

    cout << "----------------- RESULTADO -----------------" << "\n";
    cout << " Candidato 1: " << votos_cand1 << " votos" << "\n";
    cout << " Candidato 2: " << votos_cand2 << " votos" << "\n";
    cout << " Candidato 3: " << votos_cand3 << " votos" << "\n";
    cout << " Candidato 4: " << votos_cand4 << " votos" << "\n";
    cout << " Votos Nulos: " << votos_nulo << " votos" << "\n";
    cout << " Votos em Branco: " << votos_branco << " votos" << "\n";
    cout << " Porcentagem de votos em branco: " << nulos_sobre_validos << "%" << "\n";
    cout << " TOTAL DE VOTOS: " << votos_total << " votos" << "\n";
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    calc_votos();
    return 0;
}
