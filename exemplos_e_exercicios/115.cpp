
	# include <iostream>
	# include <cmath>
	using namespace std;
	
	// Funções são sub rotinas de um programa,
	// onde você escreve um código que poderá ser reutilizado
	// ao longo do programa sem precisar ficar repetindo.
	
	int soma ()
	
	{  int num_1, num_2;
	   cout << "\n\tDigite um número: ";
	   cin >> num_1;
	   cout << "\tDigite outro número: ";
	   cin >> num_2;
	
	   return num_1 + num_2;
	}
	
	int main ()
	
	{  int valor;
	   valor = soma ();
	   cout << endl << "\tO valor da soma é: " << valor << endl << endl;
	   
	   return 0;  
	}
	
	// Fonte: Responde Aí
