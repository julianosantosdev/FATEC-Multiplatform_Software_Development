#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	float largura, comprimento, area, areaTotal = 0;
	string nome, comodo;
	char continuar = 's';
	
	cout << "Informe seu nome: ";
	cin >> nome;
	
	do {
		cout << "Informe o comodo a ser calculado: ";
		cin >> comodo;
		
		cout << "Informe a largura em metros: ";
		cin >> largura;
		
		cout << "Informe o comprimento em metros: ";
		cin >> comprimento;
		
		area = largura * comprimento;
		
		cout << comodo << " possui " << area << " metros quadrados" << endl;
		
		areaTotal = area + areaTotal;
		
		cout << "Deseja incluir outro comodo? (S ou N) ";
		cin >> continuar;
		
	} while (continuar == 's' || continuar == 'S');
	
	cout << "A area total do imovel = " << areaTotal;	
	
	return 0;
}
