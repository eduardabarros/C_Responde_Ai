
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	char genero;
	float altura;
	float peso_ideal;
	
	// Recebendo valores
	
	cout << endl << "Qual o genero biologico: ";
	cin >> genero;
	
	cout << endl << "Qual sua altura (m): ";
	cin >> altura;
	
	// Estrutura de seleção
	
	switch (genero)
	
	{
	
	case 'M':
	peso_ideal = (72.7*altura)-58;
	break;
	
	case 'F':
	peso_ideal = (62.1*altura)-44.7;
	break;
	
	default:
	cout << "Invalido" << endl;
		
	}
	
	cout << endl << "Seu peso ideal é: " << peso_ideal << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: switch-case
	
	}
