#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int vetor1[10] = {1,2,3,4,5,6,7,8,9};
	int vetor2[10] = {10,11,12,13,14,15,16,17,18,19};
	int vetor3[10];
	
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			vetor3[i] = vetor1[i];
		}
		
		if (i % 2 != 0) {
			vetor3[i] = vetor2[i];
		}
	}
	
	for (int i = 0; i < 10; i++) {
		cout << vetor3[i] << endl;
	}
	
	return 0;
}
