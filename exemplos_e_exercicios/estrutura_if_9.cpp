
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float a, b, c;
	
	// Recebendo valores
	
	cout << endl << "Digite um valor para a: ";
	cin >> a;
	
	cout << endl << "Digite um valor para b: ";
	cin >> b;
	
	cout << endl << "Digite um valor para c: ";
	cin >> c;
	
	// Imprimindo com a condição
	
	if ( (a+b > c) && (a+c > b) && (b+c > a) )
	
	{ cout << endl << "Formam um triângulo" << endl << endl; }
	
	else
	
	{ cout << endl << "Não formam um triângulo" << endl << endl; }
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: if-else
	
	}
