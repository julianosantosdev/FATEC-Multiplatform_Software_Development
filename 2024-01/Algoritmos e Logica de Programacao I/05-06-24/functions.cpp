#include <iostream>
using namespace std;

// funcoes do algoritmo

float soma (float n1, float n2) {
	return (n1 + n2);
}

float subtr (float n1, float n2) {
	return (n1 - n2);
}

float multiplicacao(float n1, float n2) {
	return (n1 * n2);
}

float divisao (float n1, float n2) {
	return (n1 / n2);
}

void par (int n1) {
	int resultado = n1 % 2;
	
	if (resultado == 0) {
		cout << "NUMERO PAR!" << endl;
	} else {
		cout << "O numero e IMPAR!" << endl;
	}
}

int fatorial(int n) {
	int result = 1;	
	for (int i = 1; i <= n; i++) {
		result = result * i;
	}
	
	return result;
}

int calc() {
	int op;
	float n1 = 0, n2 = 0;
	
	do {
		cout << "|======== MENU ========|" << endl;
		cout << "| 1 - SOMA             |" << endl;
		cout << "| 2 - SUBTRACAO        |" << endl;
		cout << "| 3 - MULTIPLICACAO    |" << endl;
		cout << "| 4 - DIVISAO          |" << endl;
		cout << "| 5 - NUMERO PAR       |" << endl;
		cout << "| 6 - FATORIAL         |" << endl;
		cout << "| 7 - SAIR             |" << endl;
		cout << "|======================|" << endl;
		cin >> op;
		
		if (op != 7) {
			
			if (op == 5 || op == 6) {
				cout << "Informe o numero: " << endl;
				cin >> n1;
			} else {
				cout << "Informe o primeiro numero: " << endl;
				cin >> n1;
			
				cout << "Informe o segundo numero: " << endl;
				cin >> n2;
			}		
		}
		
		switch (op) {
			case 1:
				cout << "SOMA" << endl;
				cout << "Resultado: " << soma(n1, n2) << endl;
				break;
			
			case 2:
				cout << "SUBTRACAO" << endl;
				cout << "Resultado: " << subtr(n1, n2) << endl;
				break;
				
			 case 3:
			 	cout << "MULTIPLICACAO" << endl;
				cout << "Resultado: " << multiplicacao(n1, n2) << endl;
			 	break;
			 	
			case 4:
				cout << "DIVISAO" << endl;
				cout << "Resultado: " << divisao(n1, n2) << endl;
				break;
			
			case 5: {				
				par(n1);
				break;
			}
			
			case 6:
				cout << "FATORIAL" << endl;
				cout << "Resultado: " << fatorial(n1) << endl;
				break;
				
			case 7:
				break;
			
			default:
				cout << "Opcao Invalida!" << endl;
				break;
		}
	} while (op != 7);
}

int main() {
	calc();	
	return 0;
}
