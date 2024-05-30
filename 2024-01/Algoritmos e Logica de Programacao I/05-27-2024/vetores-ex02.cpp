#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	srand (time(NULL));
	int vetor[10];
	int maior = 0, menor = 0;
	float media;
	
	// Gera o Vetor
	for (int i = 0; i < 10; i++) {
		int randomNumber = rand() % 200 -100 ;
		vetor[i] = randomNumber;
	}
	
	// Le o vetor
	for (int i = 0; i < 10; i ++) {
		cout << vetor[i] << "\n";
	}
	
	// maior, menor, media
	for (int i = 0; i < 10; i++) {
		if (vetor[i] > maior) {
			maior = vetor[i];				
		}
		
		if (vetor[i] < menor) {
			menor = vetor[i];
		}
		
		media += vetor[i];
	}
	
	cout << "Maior Número: " << maior << "\n";
	cout << "Menor Número: " << menor << "\n";
	cout << "Maior Número: " << media/10 << "\n";
	
	return 0;
}

