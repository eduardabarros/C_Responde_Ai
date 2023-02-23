
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float preco_consumidor;
	float custo_fabrica;
	float valor_imposto;
	float valor_lucro;
	
	// Valores usados para os calculos
	
	const float taxa_imposto = 0.45;
	const float taxa_lucro = 0.12;
	
	// Recebendo dados do usuário
	
	cout << endl << "Qual o peço de consumo do carro? R$: ";
	cin >> preco_consumidor;
	
	// Operação
	
	custo_fabrica = preco_consumidor/(1 + taxa_imposto + taxa_lucro);
	
	valor_imposto = custo_fabrica*taxa_imposto;
	
	valor_lucro = custo_fabrica*taxa_lucro;
	
	// Imprimindo na tela
	
	cout << endl << endl << "Custo de fabrica R$ " << custo_fabrica << endl;
	cout << "Total de impostos R$ " << valor_imposto << endl;
	cout << "Total de lucro R$ " << valor_lucro << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Expressões e precedência	
	
	}
