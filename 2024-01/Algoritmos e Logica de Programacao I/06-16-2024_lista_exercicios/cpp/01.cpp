// EXERCÍCIO 01

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float horas_trabalhadas, salario_hora, salario_mensal;
    
    cout << "Quantas horas trabalhadas nesse mês?" << endl;
    cin >> horas_trabalhadas;
    
    cout << "Qual seu salário por hora?" << endl;
    cin >> salario_hora;
    
    salario_mensal = (horas_trabalhadas * salario_hora);
    
    cout << "Seu salário é de R$ " << salario_mensal << "\n";
        
    return 0;
}
