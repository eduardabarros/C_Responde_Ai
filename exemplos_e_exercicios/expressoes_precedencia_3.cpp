
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	const double aumento = 0.076;
	double salario_anual_anterior;
	double salario_anual;
	double salario_mensal;
	double pagamento_retroativo;
	
	// Introduzindo valores
	
	cout << endl << "Salário do ano anterior: ";
	cin >> salario_anual_anterior;
	
	// Operação
	
	salario_anual = salario_anual_anterior + aumento*salario_anual_anterior;
	
	// poderia escrever tbm: salario_anual = salario_anual_anterior*(1+aumento)
	
	salario_mensal = salario_anual/12;
	
	pagamento_retroativo = (salario_anual - salario_anual_anterior)/2;
	
	// Imprimindo na tela
	
	cout << endl << "Valores do semestre atual: " << endl << endl;
	cout << "Novo salário anual: " << salario_anual << endl;
	cout << "Novo salário mensal: " << salario_mensal << endl;
	cout << "Retroativo: " << pagamento_retroativo << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Exercício expressões e precedência
	
	}
