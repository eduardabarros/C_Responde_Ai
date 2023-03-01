
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	
	{
	
	// Declarando variáveis
	
	float a, b, c, equilatero, isosceles, escaleno;
	
	// Recebendo valores
	
	cout << endl << "Digite um valor para a: ";
	cin >> a;
	cout << endl << "Digite um valor para b: ";
	cin >> b;
	cout << endl << "Digite um valor para c: ";
	cin >> c;
	
	// Imprimindo na tela de acordo com as condições
	
	if (a == b && b == c && a == c)
	
	{ cout << endl << "O tiângulo é equilátero" << endl << endl; }
	
	else if (a == b || a == c || b == c)
	
	{ cout << endl << "O triângulo é isósceles" << endl << endl; }
	
	else
	
	{ cout << endl << "O triângulo é escaleno" << endl << endl; }
	
	return 0;
	
	// Fonte:: Responde Aí - Estrutura de seleção: if-else
	
	}
