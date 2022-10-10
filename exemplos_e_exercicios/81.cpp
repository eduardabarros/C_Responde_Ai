
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float peso, altura, IMC;
	
	// Inserindo valores
	
	cout << endl << "Digite seu peso (Kg): ";
	cin >> peso;
	cout << endl << "Digite sua altura (m): ";
	cin >> altura;
	
	// Operação
	
	IMC = peso/pow(altura,2);
	
	// Imprimir na tela de acordo com a condição
	
	if (IMC < 18.5)
	
	{ cout << endl << "Abaixo do peso. IMC = " << IMC << endl << endl; }
	
	else if (IMC < 25)
	
	{ cout << endl << "Peso normal. IMC = " << IMC << endl << endl; }
	
	else if (IMC < 30)
	
	{ cout << endl << "Acima do peso. IMC = " << IMC << endl << endl; }
	
	else
	
	{ cout << endl << "Obeso. IMC = " << IMC << endl << endl; }
	
	return 0;
	
	// Fonte: Responde Aí - Estrutur de seleção: if-else
	
	}
