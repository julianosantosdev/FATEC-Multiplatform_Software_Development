#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int tab_valor;
	
	cout << "Qual tabuada deseja calcular: ";
	cin >> tab_valor;
	
	for(int i = 0; i <= 10; i++) {
		int resultado = i * tab_valor;
		cout << tab_valor << " x " << i << " = " << resultado << endl;
	}
	return 0;
}
