#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	for (int i = 1; i <= 500; i++) {		
		if (i % 10 == 0) {
			cout << "Multiplo de 10! \n";
		} else {
			if (i % 2 == 0) {
				cout << i << endl;
			}
			

		}
	}
	return 0;
}
