#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	int anos, meses, dias;
	
	cout << "Informe a idade em anos: ";
	cin >> anos;
	
	cout << "Informe a idade em meses: ";
	cin >> meses;
	
	cout << "Informe a idade em dias: ";
	cin >> dias;
	
	int anos_em_dias = (anos * 365) + (meses * 30) + (dias);
	
	cout << "Voce tem " << anos_em_dias << " dias de idade";
	
	return 0;
}
