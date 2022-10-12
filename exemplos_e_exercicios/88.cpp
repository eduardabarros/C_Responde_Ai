
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variável
	
	int num;
	
	// Inserindo valores
	
	cout << endl << "Inserindo um número: ";
	cin >> num;
	
	// Usando o switch case
	
	switch (num >=0)
	
	{
	
	  case true:
	  		cout << endl << "O número é positivo" << endl << endl;
	  		break;
	  		
	  case false:
	  		cout << endl << "O número é negativo" << endl << endl;
	  		break;
	  		
	}
	
	return 0;	
	
	// Fonte: Responde Aí - Estruturas de seleção: switch-case
	
	}
