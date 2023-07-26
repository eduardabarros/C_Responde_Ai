
	# include <iostream>
	# include <cmath>
	using namespace std;
	
	int main ()
	
	{
	
	int N;
	int i=0;
	float num;
	float soma=0;
	float media=0;
	
	cout << endl << "\tQuantos números deseja inserir: ";
	cin >> N;
	
	while (i<N)
	
	   {   cout << "\tInsira um número: ";
	       cin >> num;
	      
	       soma = soma + num;
	      
	       i++;
	    }
	   
	media = soma/N;
	
	cout << "\tA media é: " << media << endl << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Estrutura de repetição: while e do-while
