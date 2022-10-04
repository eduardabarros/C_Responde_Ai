
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int a, b, c;
	double x, y;
	
	// Introduzindo valores
	
	cout << endl << "Digite 3 valores inteiros: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	cout << endl << "Digite um valor qualquer para x: ";
	cin >> x;
	
	// Operação
	
	y = a*x*x + b*x + c;
	
	cout << endl << "Inserindo esses valores em uma equação do segundo grau encontramos y = " << y << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Exercício expressões e precedência
	
	}
