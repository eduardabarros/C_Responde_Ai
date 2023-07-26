
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	char a;
	
	// Recebendo valor
	
	cout << endl << "Insira um 'S' para Sim e um 'N' para Não: ";
	cin >> a;
	
	// Usando o switch-case
	
	switch (a)
	
	{
	  
	  case 'S':
	  cout << "Você digitou S" << endl << endl;
	  break;
	  
	  case 'N':
	  cout << "Você digitou N" << endl << endl;
	  break;
	  
	  default:
	  cout << "Valor invalido" << endl << endl;
	  break;	  
	  
	}
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: switch-case
	
	}
