
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando as variáveis
	
	float a0, an; // primeiro e ultimo termo da PA
	float r;      // razão
	int n;        // quantidades de termos
	float soma;
	
	// Introduzindo valores
	
	cout << endl << "a0: ";
	cin >> a0;
	cout << "an: ";
	cin >> an;
	cout << "r: ";
	cin >> r;
	
	// Operação
	
	n = (an-a0)/r + 1;
	
	soma = n*(a0+an)/2;
	
	// Imprimindo na tela
	
	cout << endl << "Quantidade de termos: " << n << endl;
	cout << "Soma = " << soma << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Expressões e precedência
	
	}
