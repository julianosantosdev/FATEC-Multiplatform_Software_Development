#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	float celsius_temp;
	
	cout << "Informe a temperatura em Celsius: ";
	cin >> celsius_temp;
	
	float converted_temp = (celsius_temp * 1.8) + 32;
	
	cout << "A temperatura em Fahrenheit e: " << converted_temp << "F";
	
	return 0;
}
