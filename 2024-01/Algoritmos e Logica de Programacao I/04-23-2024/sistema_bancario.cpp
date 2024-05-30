#include <iostream>
using namespace std;


int main() {
	string name;
	string account1 = "01.23456-7";
	string account2 = "02.65432-1";
	
	char account_selector = 's' ;
	char continue_account = 's';
	float balance_account1 = 4184, balance_account2 = 7924;
	
	int option_account = 0, option_menu;
		
	cout << "Seu nome: ";
	cin >> name;
	
	while (account_selector == 's') {
		do {
			cout << "Ola " << name << endl;
			cout << "1 - Conta corrente 01.23456-7" << endl;
			cout << "2 - Conta corrente 02.65432-1" << endl;
			cout << "9 - Sair" << endl;
			cout << "Qual conta deseja acessar? ";
			cin >> option_account;
			cout << endl;
		} while(option_account > 2 && option_account != 9);
		
		if (option_account == 1 || option_account == 2) {
			
			if (option_account == 1) {
			cout << "Conta Corrente: " << account1 << endl << endl;
			} else {
				cout << "Conta Corrente: " << account2 << endl << endl;
			}
					
			do {
				cout << "|=========== MENU ===========|" << endl;
				cout << "| 1 - Deposito               |" << endl;
				cout << "| 2 - Saque                  |" << endl;
				cout << "| 3 - Consulta               |" << endl;
				cout << "| 4 - Transferencia          |" << endl;
				cout << "| 5 - Sair                   |" << endl;
				cout << "|============================|" << endl;
				
				cin >> option_menu;
				
				switch(option_menu) {
					case 1:
						float deposit_value;				
						cout << "|========= DEPOSITO ==========|" << endl << endl;			
						cout << "Insira o valor do deposito: ";
						cin >> deposit_value;
						cout << "Deposito realizado!" << endl;
						
						if (option_account == 1) {
							balance_account1 += deposit_value;
						} else {
							balance_account2 += deposit_value;
						}
						break;
					
					case 2:
						float withdraw_value;				
						cout << "|========= SAQUE ==========|" << endl << endl;			
						cout << "Insira o valor do saque: ";
						cin >> withdraw_value;			
											
						if (option_account == 1) {
							
							if (withdraw_value > balance_account1) {
								cout << "Voce nao possui saldo suficiente";
							} else {
								balance_account1 -= withdraw_value;
							}
							
							
						} else {
							
							if (withdraw_value > balance_account2) {
								cout << "Voce nao possui saldo suficiente";
							} else {
								balance_account2 -= withdraw_value;
							}
						}
						break;
					
					case 3:
						cout << "|========= CONSULTA ==========|" << endl;	
							
						if (option_account == 1) {
							cout << "SALDO: " << balance_account1 << endl;
						} else {
							cout << "SALDO: " << balance_account2 << endl;
						}
						break;
						
					case 4: 
						float transfer_value;
						
						cout << "|========= TRANSFERENCIA ==========|" << endl;
						
						if (option_account == 1) {
							cout << "Qual valor deseja transferir para: " << account2 << ": ";
							cin >> transfer_value;
							
							while (transfer_value > balance_account1) {
								cout << "Valor maior que o saldo";
							}
							
							balance_account1 - transfer_value;
							balance_account2 + transfer_value;				
						} else {
							cout << "Qual valor deseja transferir para " << account1 << ": ";
							cin >> transfer_value;
							
							while (transfer_value > balance_account1) {
							cout << "Valor maior que o saldo";
							}
							
							balance_account2 - transfer_value;
							balance_account1 + transfer_value;	
						}
						break;
						
					case 5:
						continue_account = 'n';
						break;
				}
			} while (continue_account == 's');
		} else {
			cout << "Deseja ao menu de contas? (s/n)";
			cin >> account_selector;
		}
	};
	
	cout << "Voce saiu do sistema.";
	
	return 0;
}
