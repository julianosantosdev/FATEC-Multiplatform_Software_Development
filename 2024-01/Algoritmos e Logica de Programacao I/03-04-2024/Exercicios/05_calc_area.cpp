#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	float largura, comprimento;
	
	cout << "Informe a largura: ";
	cin >> largura;
	
	cout << "Informe o comprimento: ";
	cin >> comprimento;
	
	int perimetro = (2 * comprimento) + (2 * largura);
	int area = comprimento * largura;
	
	cout << "A area: " << area << "m2 \n";
	cout << "O perimetro: " << perimetro << "m";
	
	
	return 0;
}
