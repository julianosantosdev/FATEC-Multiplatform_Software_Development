// EXERCÍCIO 05

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float tamanho_arquivo, velocidade_link, tamanho_megabits, tempo_download_minutos;
    
    cout << "Qual o tamanho do arquivo (MB - Megabytes)? " << "\n";
    cin >> tamanho_arquivo;
    
    cout << "Qual a velocidade de conexão (Mbps - Megabits por segundo)? " << "\n";
    cin >> velocidade_link;
    
    tamanho_megabits = tamanho_arquivo * 8;
    tempo_download_minutos = (tamanho_megabits / velocidade_link)/60;
    
    cout << "TEMPO DE DOWNLOAD: " << tempo_download_minutos << " min. \n";
    
    return 0;
}
