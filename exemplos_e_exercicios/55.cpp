
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando as variáveis
	
	int a, b, c, d;
	int soma, mult;
	bool resultado;
	
	// Introduzindo valores
	
	cout << endl << "Digite um número inteiro e aperte enter: " << endl << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	
	// Operação
	
	soma = a + b;
	mult = c*d;
	
	resultado = mult > soma;
	
	cout << endl << "O valor da soma é: " << soma << endl;
	cout << "O valor da multiplicação é: " << mult << endl;
	cout << endl << "Imprima 1 se o produto for maior do que a soma. Do contrário imprima 0. Resposta: " << resultado << endl << endl;
	
	return 0;
	
	//Fonte: Responde Aí - Operadores booleanos
	
	}
