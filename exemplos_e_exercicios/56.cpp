
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	double n; 		// número de anos que ele fuma
	int c; 			// número de cigarros fumados por dia
	double p; 		// preço de uma carteira com 20 cigarros
	double valor_unitario;  // valor unitário de cada cigarro
	int numero_de_dias;
	double resultado_2;
	
	// Introduzindo valores	
	
	cout << endl << "Há quantos anos você fuma? Resposta: ";
	cin >> n;
	
	cout << endl << "Quantos cigarros você fuma por dia? Resposta: ";
	cin >> c;
	
	cout << endl << "Quanto custa a carteira do cigarro que você fuma? \n (na carteira deve conter 20 cigarros) \n Resposta: ";
	cin >> p;
	
	// Operação
	
	valor_unitario = p/20;
	
	numero_de_dias = n*365;
	
	resultado_2 = valor_unitario*c*numero_de_dias;
	
	
	// Resultado que será impresso na tela
	
	cout << endl << "Ao longo de todos esses anos você gastou " << resultado_2 << " reais com cigarros." << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Exercício expressões e precedência
	
	}
