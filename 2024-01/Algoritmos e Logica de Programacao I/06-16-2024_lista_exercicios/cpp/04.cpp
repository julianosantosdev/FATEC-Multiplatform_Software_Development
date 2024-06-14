// EXERCÍCIO 04

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float area, volume_tinta, qtde_latas, preco_total, valor_total;
    
    cout << "Qual a area a ser pintada (em m2)?" << "\n";
    cin >> area;
    
    volume_tinta = area/3;
    qtde_latas = ceil(volume_tinta/18);
    valor_total = 80 * qtde_latas;
    
    cout << "QUANTIDADE DE LATAS NECESSÁRIAS: " << qtde_latas << "\n";
    cout << "VALOR TOTAL: R$ " << valor_total << "\n";
    
    return 0;
}
