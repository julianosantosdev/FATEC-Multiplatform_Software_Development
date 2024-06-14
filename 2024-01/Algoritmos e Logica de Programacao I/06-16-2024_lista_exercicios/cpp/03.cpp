// EXERCÍCIO 03

#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float horas_trabalhadas, salario_hora, salario_bruto, salario_liquido, inss, ir, sindicato;
    
    cout << "Quantas horas trabalhadas nesse mês?" << endl;
    cin >> horas_trabalhadas;
    
    cout << "Qual seu salário por hora?" << endl;
    cin >> salario_hora;
    
    salario_bruto = (horas_trabalhadas * salario_hora);
    
    ir = salario_bruto * 0.11;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - ir - inss - sindicato;
    
    cout << "|========== SALARIO BRUTO ==========|" << "\n";
    cout << " R$ " << salario_bruto << "\n" << "\n";
    
    cout << "|============ DESCONTOS ============|" << "\n";
    cout << " Imposto de Renda R$ " << ir << "\n";
    cout << " INSS R$ " << inss << "\n";
    cout << " Sindicato R$ " << sindicato << "\n" << "\n";
    
    cout << "|========= SALARIO LÍQUIDO =========|" << "\n";
    cout << " R$ " << salario_liquido << "\n";
    cout << "|===================================|" << "\n";
    
    return 0;
}
