#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float nota01, nota02, nota03, nota04, media, frequencia;
		
	cout << "Insira a nota 01: ";
	cin >> nota01;
	
	cout << "Insira a nota 02: ";
	cin >> nota02;
	
	cout << "Insira a nota 03: ";
	cin >> nota03;
	
	cout << "Insira a nota 04: ";
	cin >> nota04;
	
	cout << "Insira a frequência ";
	cin >> frequencia;
	
	media = (nota01 + nota02 + nota03 + nota04)/4;
	
	if (frequencia > 75) {
		if (media >= 6) {
		cout << "Aprovado!";
	}
	else if (media > 4) {
		cout << "Exame";
	}
	else {
		cout <<"Reprovado por média";
	};
		
	} else {
		cout << "Reprovado por frequência";
	};	
	
	return 0;
}
