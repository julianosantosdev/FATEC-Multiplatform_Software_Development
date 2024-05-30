#include <iostream>
using namespace std;

void factorial() {
	int n=0;
	int result = 1;
	cout << "Insira o numero a ser calculado o fatorial" << endl;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		result = result * i;
	}
	
	cout << n << "! = " << result;
}

int main() {
	factorial();
	return 0;
}
