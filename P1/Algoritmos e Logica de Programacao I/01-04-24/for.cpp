#include <iostream>

using namespace std;
int main() {
	int valor_inicial = 0, valor_final=0;
	
	cout << "Qual o valor incial: ";
	cin >> valor_inicial;
	
	cout << "Qual o valor final: ";
	cin >> valor_final;
	
	if (valor_inicial < valor_final) {
		for(float i=valor_inicial; i <= valor_final; i++){
		cout << "Contando... " << i << endl;
		}
	}else {
		for(float i=valor_inicial; i >= valor_final; i--){
		cout << "Contando... " << i << endl;
		}
	}	
	return 0;
	

}
