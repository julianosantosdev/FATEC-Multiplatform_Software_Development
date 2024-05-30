#include <iostream>
using namespace std;

int main() {
	int q = 3;
	string nomes[q];
	string telefones[q];
	int op;
	int i = 0;
	
	while(op != 3) {
		cout << "|==== AGENDA TELEFONICA ====|" << endl;
		cout << "| 1 - Cadastrar contato     |" << endl;
		cout << "| 2 - Listar contato        |" << endl;
		cout << "| 3 - Sair                  |" << endl;
		cout << "|===========================|" << endl;
		cin >> op;
		
		switch (op) {
			case 1:
				if (i < q) {
					cout << "Informe o nome: " << i << endl;
				cin >> nomes[i];
			
				cout << "Informe o telefone: " << i << endl;
				cin >> telefones[i];
			
				i++;

				} else {
					cout << "Sem espacos na lista!" << endl;
				}
				
				break;
			
			case 2:
				cout << "Exibindo os dados: " << endl;
				for (int j = 0; j < i; j++) {
				cout << nomes[j] << " - " << telefones[j] << endl;
				}
			
			case 3:
				break;
		}
		
		
	}
		
	
	
	
	
	return 0;
}
