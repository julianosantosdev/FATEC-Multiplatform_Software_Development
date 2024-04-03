#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string correto = "Resposta correta :) \n";
	string errado = "Resposta errada :( \n";
	int resultado = 0;
	
	string resposta;
	
	cout << "Utlize a, b, c, d ou e nas respostas \n\n";	
	cout << "Qual e a capital do Japao? \n a)Pequim \n b)Toquio \n c)Seul \n d)Bangkok \n e)Manila \n";
	cout << "Sua resposta: ";
	cin >> resposta;
	
	if (resposta == "b") {
		cout << correto << "\n";
		resultado += 10;
	} else {
		cout << errado << "\n";
	}
	
	cout << "Qual e o maior planeta do sistema solar? \n a)Venus \n b)Marte \n c)Jupiter \n d)Saturno \n e)Urano \n";
	cout << "Sua resposta: ";
	cin >> resposta;
	if (resposta == "c") {
		cout << correto << "\n";
		resultado += 10;
	} else {
		cout << errado << "\n";
	}
	
	cout << "Quem escreveu a peça 'Romeu e Julieta'? \n a)William Shakespeare \n b)Charles Dickens \n c)Jane Austen \n d)F. Scott Fitzgerald \n e) Mark Twain \n";
	cout << "Sua resposta: ";
	cin >> resposta;
	if (resposta == "a") {
		cout << correto << "\n";
		resultado += 10;
	} else {
		cout << errado << "\n";
	}
	
	cout << "Qual e o simbolo quimico para o ouro? \n a)Ag \n b)Fe \n c)He \n d)Pb \n e)Au \n";
	cout << "Sua resposta: ";
	cin >> resposta;
	if (resposta == "e") {
		cout << correto << "\n";
		resultado += 10;
	} else {
		cout << errado << "\n";
	}
	
	cout << "Em que ano ocorreu a independencia dos Estados Unidos? \n a)1676 \n b)1776 \n c)1876 \n d)1976 \n e)2076 \n";
	cout << "Sua resposta: ";
	cin >> resposta;
	if (resposta == "b") {
		cout << correto << "\n";
		resultado += 10;
	} else {
		cout << errado << "\n";
	}
	
	if (resultado == 0) {
		cout << "O teste finalizou. Voce nao pontuou! :(";
	} else {
		cout << "O teste finalizou. Voce fez " << resultado << " pontos!";
	}
				
	return 0;
}
