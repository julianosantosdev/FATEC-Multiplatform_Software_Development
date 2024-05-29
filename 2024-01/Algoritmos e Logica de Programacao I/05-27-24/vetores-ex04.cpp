#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int vetor[10] = {98, 42, -82, 45, 42, -81, -82, -935, 100, 2}; // 42, -82
	
	for (int i = 0; i < 10; i++) {
		
		for (int j = i+1; j < 10; j++) {
			if (vetor[i] == vetor[j]) {
				cout << vetor[j] << endl;				
			}
		}
	}
	return 0;
}
