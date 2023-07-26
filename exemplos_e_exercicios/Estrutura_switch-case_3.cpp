
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int num;
	
	// Inserindo valores
	
	cout << endl << "Insira um número: ";
	cin >> num;
	
	// Switch-case
	
	switch (num)
	
	{
	
	case 1:
		cout << "Domingo" << endl << endl;
	break;
	
	case 2:
		cout << "Segunda" << endl << endl;
	break;
	
	case 3:
		cout << "Terça-feira" << endl << endl;
	break;
	
	case 4:
		cout << "Quarta-feira" << endl << endl;
	break;
	
	case 5:
		cout << "Quinta-feira" << endl << endl;
	break;
	
	case 6:
		cout << "Sexta-feira" << endl << endl;
	break;
	
	case 7:
		cout << "Sabado" << endl << endl;
	break;
	
	default:
		cout << "Valor inválido" << endl << endl;
	break;
	
	}
	
	return 0;
	
	// Fonte Responde Aí - Estrutura de seleção: switch-case
	
	}
