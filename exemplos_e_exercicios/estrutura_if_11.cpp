
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int ano;
	float valor, imposto;
	const float taxa_antes_1990 = 0.01;
	const float taxa_1990 = 0.015;
	
	// Recebendo dados
	
	cout << endl << "Digite o ano de fabricação do veículo: ";
	cin >> ano;
	
	cout << endl << "Digite o valor do veículo: ";
	cin >> valor;
	
	// Operação de acordo com as condições
	
	if (ano < 1990)
	
	{ imposto = valor * taxa_antes_1990; }
	
	else
	
	{ imposto = valor * taxa_1990; }
	
	// Imprimindo na tela
	
	cout << endl << "Valor do imposto: " << imposto << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Estruturas de seleção: if-else
	
	}
