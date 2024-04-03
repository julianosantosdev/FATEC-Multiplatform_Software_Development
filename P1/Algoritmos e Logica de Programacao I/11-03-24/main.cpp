#include <iostream>
using namespace std;

int main() {
	int idade;
	
	cout << "Informe sua idade: ";
	cin >> idade;
	
	if (idade >= 16) {
		cout << "Voce pode votar!";
	}
	
	if (idade < 16) {
		cout << "Voce nao pode votar!";
		
	}
		
	return 0;
}
