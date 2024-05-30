#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Comando ' COUT << ""; ' mostra dados ou mensagens na tela.
Comando ' CIN >> variável; ' faz a leitura dos dados pelo teclado e armazena na variável.
*/

using namespace std;

int main() {
	string nome;
	int idade;
	float salario;
	float desconto;
	float salario_liquido;
	
	// lendo os dados
	cout << "Informe o nome: ";
	cin >> nome;
	
	cout << "Informe o Salario Base: ";
	cin >> salario;
	
	cout << "Informe os descontos: ";
	cin >> desconto;
	
	//Calculando o Salario Liquido
	salario_liquido = salario - desconto;
	
	//Mostrar o resultado
	cout << "Salario Liquido: " << salario_liquido;
	
	return 0;
}
