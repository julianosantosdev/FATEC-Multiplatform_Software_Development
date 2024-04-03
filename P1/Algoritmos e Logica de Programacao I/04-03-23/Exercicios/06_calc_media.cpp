#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	float n1, n2, n3, n4;
	
	cout << "Informe o primeiro numero: ";
	cin >> n1;
	
	cout << "Informe o segundo numero: ";
	cin >> n2;
	
	cout << "Informe o terceiro numero: ";
	cin >> n3;
	
	cout << "Informe o quarto numero: ";
	cin >> n4;
	
	float media = (n1 + n2 + n3 + n4) / 4;
	
	cout << "A media e: " << media;
	
	
	return 0;
}
