#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	srand (time(NULL));
	
	int vetor[10];
	int negativos, somaPositivos;
	
	for (int i = 0; i < 10; i++) {
		int randomNumber = rand() % 200 -100 ;
		vetor[i] = randomNumber;
		cout << vetor[i] << "\n";
	}
	
	for (int i = 0; i < 10; i++) {
		if (vetor[i] > 0) {
			somaPositivos += vetor[i];
		} else {
			negativos++;
		}
	}
	
	cout << "Qtde de numeros Negativos: " << negativos << "\n";
	cout << "Soma de Numeros Positivos: " <<somaPositivos << "\n";
	
	return 0;
}
