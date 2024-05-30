#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int vetor[5];
	int maior = 0, menor = 0, posicaoMaior, posicaoMenor;
	float media;
	
	// Gera o Vetor
	for (int i = 0; i < 5; i++) {	
		cout << "Insira o valor: " << i << "\n";
		cin >> vetor[i];
	}
	
	
	// maior, menor
	for (int i = 0; i < 5; i++) {
		if (vetor[i] > maior) {
			maior = vetor[i];
			posicaoMaior = i;				
		}
		
		if (vetor[i] < menor) {
			menor = vetor[i];
			posicaoMenor = i;
		}
	}
	
	cout << "Posicao do MAIOR Numero: " << posicaoMaior << "\n";
	cout << "Posicao do MENOR Numero: " << posicaoMenor << "\n";
	
	return 0;
}
