#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	float peso=0, excesso=0, multa=0;
	int teste;
	
	cout << "Qual o peso dos peixes: ";
	cin >> peso;
	
	//excesso = round(peso - 50);
	excesso = round((peso-50)*100)/100;
	multa = round((excesso*4)*100)/100;
	
	if (peso > 50) {
		cout << "Peso: " << peso << " kg\n";
		cout << "Excesso: " << excesso << " kg\n";
		cout << "Multa: R$ " << multa << "\n";
	} else {
		excesso = 0;
		multa = 0;
		cout << "Peso: " << peso << "\n";
		cout << "Excesso: " << excesso << "\n";
		cout << "Multa: R$ " << multa << "\n";
	}
	
	return 0;
}
