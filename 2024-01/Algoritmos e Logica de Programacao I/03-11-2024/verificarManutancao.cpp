#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string nome_funcionario;
	int total_pecas_prod, total_pecas_defeito, cod_maquina;
	
	cout << "Nome do funcionario: ";
	cin >> nome_funcionario;
	
	cout << "Informe a quantidade de pecas produzidas: ";
	cin >> total_pecas_prod;
	
	cout << "Informe a quantidade de pecas com defeito: ";
	cin >> total_pecas_defeito;
	
	int resultado = total_pecas_prod * 0.1;
	
	if (total_pecas_defeito > resultado) {
		cout << "MAQUINA PRECISA DE MANUTENCAO!";
	}else {
		cout << "MAQUINA FUNCIONANDO PERFEITAMENTE!";
	}
	
	return 0;
}
