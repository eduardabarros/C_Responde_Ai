
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int codigo;
	
	// Recebendo valores
	
	cout << endl << "Digite o código do produto: ";
	cin >> codigo;
	
	// Estrutura de seleção
	
	switch (codigo)
	
	{
	
	case 1:
		cout << endl << "Alimento não-perecível" << endl << endl;
	break;
	
	case 2:
		cout << endl << "Alimento perecível" << endl << endl;
	break;
	
	case 3:
		cout << endl << "Vestuário" << endl << endl;
	break;
	
	case 4:
		cout << endl << "Higiene pessoal" << endl << endl;
	break;
	
	case 5:
		cout << endl << "Limpeza e utensílios domésticos" << endl << endl;
	break;
	
	default:
		cout << endl << "Inválido" << endl << endl;
	break;
	
	}
	
	return 0;
	
	// Fonte: Responde Aí - Estruturas de seleção: switch-case
	
	}
