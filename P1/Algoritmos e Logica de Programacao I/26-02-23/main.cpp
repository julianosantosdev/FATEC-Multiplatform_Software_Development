#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n1, n2;
	int resultado;
	
	cout << "Digite o primeiro numero ";
	cin >> n1;
	
	cout << "Digite o segundo numero ";
	cin >> n2;
	
	resultado = n1 + n2;
	
	cout << "O resultado e: " << resultado;
	
	return 0;
}
