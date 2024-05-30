#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
	int factorial, result = 1;
	
	cout << "Qual fatorial voce quer calcular? ";
	cin >> factorial;
	
	cout << "Ok... Calculando." << endl;
	
	for (int i = factorial; i > 1; i--) {
		result *= i;
	}
	
	cout << factorial << "! = " << result;
	
	return 0;
}
