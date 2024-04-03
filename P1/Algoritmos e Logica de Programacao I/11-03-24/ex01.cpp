#include <iostream>
using namespace std;

int main() {
	int codigo_do_medidor;
	string nome_do_cliente;
	int leitura_anterior;
	int leitura_atual;
	int tipo_de_ligacao;
	
	float valor_da_conta;
	
	cout << "Insira o codigo do medidor: ";
	cin >> codigo_do_medidor;
	
	cout << "Insira o nome do cliente: ";
	cin >> nome_do_cliente;
	
	cout << "Informe a leitura anterior: ";
	cin >> leitura_anterior;
	
	cout << "Informe a leitura atual: ";
	cin >> leitura_atual;
	
	cout << "Tipo de ligacao: \n";
	cout << "1 - Residencial \n";
	cout << "2 - Comercial \n";
	cout << "3 - Industrial \n";
	cin >> tipo_de_ligacao;
	
	int consumo = leitura_atual - leitura_anterior;
	
	if(tipo_de_ligacao == 1) {
		valor_da_conta = consumo * 0.6;
	}
	
	if (tipo_de_ligacao == 2) {
		valor_da_conta = consumo * 0.48;
	}
	
	if (tipo_de_ligacao == 3) {
		valor_da_conta = consumo * 1.29;
	}
	
	cout << "Valor da conta de " << nome_do_cliente << "e: " << valor_da_conta;
	return 0;
}
