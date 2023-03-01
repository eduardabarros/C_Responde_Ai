
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()

	{
	
	// Declarando as variáveis
	
	int codigo;
	float salario_atual;
	float salario_novo;
	float diferenca;
	
	// Recebendo valores
	
	cout << endl << "Digite o código do cargo: ";
	cin >> codigo;
	
	cout << endl << "Salário atual: ";
	cin >> salario_atual;
	
	// Operação de acordo com as condições
	
	if (codigo == 101)
	
	{ 
	
	  salario_novo = salario_atual * 1.1; 
	  cout << endl << "Cargo: Gerente" << endl;
	  
	}
	
	else if (codigo == 102)
	
	{
	
	  salario_novo = salario_atual * 1.2;
	  cout << endl << "Cargo: Engenheiro" << endl;
	
	}
	
	else if (codigo == 103)
	
	{
	
	  salario_novo = salario_atual * 1.3;
	  cout << endl << "Cargo: Tecnico" << endl;
	
	}
	
	else
	
	{
	
	  salario_novo = salario_atual * 1.4;
	  cout << endl << "Cargo: Outros" << endl;
	
	}
	
	// Operação do aumento salarial
	
	diferenca = salario_novo - salario_atual;
	
	// Imprimindo na tela
	
	cout << "Salario inicial: R$ " << salario_atual << endl;
	cout << "Novo salario: R$ " << salario_novo << endl;
	cout << "Aumento salarial: R$ " << diferenca << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: if-else
	
	}
