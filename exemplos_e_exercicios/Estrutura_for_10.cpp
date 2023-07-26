
	# include <iostream>
	# include <cmath>
	using namespace std;
	
	int main ()
	
	{
	
	int N;           // determina a quantidade de voltas
	int i=0;         // variavel de iteração
	float num = 0;   // variavel que recebe o número do usuário
	float soma = 0;  // armazena a soma dos números
	float media = 0; // armazena a média
	
	cout << endl << "\tQuantos números deseja inserir: ";
	cin >> N;
	
	for (i=0;i<N;i++)
	
	{
		cout << "\tInsira um número: ";
		cin >> num;
		
		soma = soma + num;
	} 
	
	media = soma/N;
	
	cout << "\tA media é: " << media << endl << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Estrutura de repetição: Laço for
