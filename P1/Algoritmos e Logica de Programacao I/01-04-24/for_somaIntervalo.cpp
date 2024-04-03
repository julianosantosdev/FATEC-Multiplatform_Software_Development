#include <iostream>

using namespace std;
int main() {
	int valor_inicial, valor_final, resultado=0;
	
	cout << "Valor Inicial: ";
	cin >> valor_inicial;
	
	cout << "Valor Final: ";
	cin >> valor_final;
	
	if (valor_inicial < valor_final) {
		for (int i = valor_inicial; i <= valor_final; i++) {
			resultado = i + resultado;
		}
		cout << "Resultado: " << resultado;
	} else {
		for (int i = valor_inicial; i >= valor_final; i--) {
			resultado = i + resultado;
		}
		cout << "Resultado: " << resultado;
	}
		
	return 0;
}
