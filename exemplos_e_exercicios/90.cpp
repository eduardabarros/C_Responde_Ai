
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float num_1, num_2;
	float result;
	char operacao;
	
	// Inserindo dados
	
	cout << endl << "Primeiro número: ";
	cin >> num_1;
	cout << endl << "Segundo número: ";
	cin >> num_2;
	cout << endl << "Qual operação (+, -, *, ou /): ";
	cin >> operacao;
	
	// Usando o switch-case
	
	switch (operacao)
	
	{
	
	case '+':
		  result = num_1 + num_2;
		  cout << endl << num_1 << " + " << num_2 << " = " << result << endl << endl;
	break;
	
	case '-':
		  result = num_1 - num_2;
		  cout << endl << num_1 << " - " << num_2 << " = " << result << endl << endl;
	break;
	
	case '*':
		  result = num_1 * num_2;
		  cout << endl << num_1 << " * " << num_2 << " = " << result << endl << endl;
	break;
	
	case '/':
		  result = num_1 / num_2;
		  cout << endl << num_1 << " / " << num_2 << " = " << result << endl << endl;
	break;
	
	default:
		  cout << endl << "Valor inválido" << endl << endl;
	break;
	
	}
	
	return 0;	
		
	// Fonte: Responde Aí - Estrutura de seleção: switch-case
	
	}
