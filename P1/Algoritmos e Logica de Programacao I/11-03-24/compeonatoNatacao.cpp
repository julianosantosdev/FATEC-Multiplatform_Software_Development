#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string nome ;
	int ano_nasc, ano_atual, estilo, idade=0;
	
	cout << "Nome do atleta: ";
	cin >> nome;
	
	cout << "Ano de nascimento: ";
	cin >> ano_nasc;
	idade = ano_atual - ano_nasc;
	
	cout << "Estilo de natacao:\n";
	cout << "1 - Nado Livre \n";
	cout << "2 - Nado de Costas \n";
	cout << "3 - Nado Borboleta \n";
	cin >> estilo;
	
	if (estilo == 1 && idade <= 16) {
		cout << "Piscina 01";		
	} else if (estilo == 1 && idade > 16) {
		cout << "Piscina 05";
	} else if (estilo == 2 && idade <= 21) {
		cout << "Piscina 02";
	} else if (estilo == 2 && idade > 21) {
		cout << "Piscina 03";
	} else if (estilo == 3 && idade < 12) {
		cout << "Piscina 04";
	} else {
		cout << "Piscina 06";
	};
	
	if (estilo == 1) {
		if (idade <= 16) {
			cout << "Piscina 01";	
		} else {
			cout << "Piscina 05";
		}
	};
	
	if (estilo == 2) {
		if (idade <= 21) {
			cout << "Piscina 02";	
		} else {
			cout << "Piscina 03";
		}
	} else {
		if (idade < 12) {
			cout << "Piscina 04";
		} else {
			cout << "Piscina 06";
		}
	}
	

	return 0;
}
