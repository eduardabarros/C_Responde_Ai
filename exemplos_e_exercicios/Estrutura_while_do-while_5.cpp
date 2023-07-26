
	#include <iostream>
	using namespace std;
	
	int main ()
	
	{
	
	float nota_1, nota_2, media;
	
	// Para garantir que o código seja rodado pelo menos uma vez, a melhor escolha é usar do-while
	
	bool continuar = true;
	
	  do
	
	    {  cout << endl << "\tNota 1 = ";
	       cin >> nota_1;
	     
	       cout << "\tNota 2 = ";
	       cin >> nota_2;
	     
	       media = (nota_1 + nota_2)/2;
	     
	       cout << "\tMédia = " << media << endl;
	     
	       cout << endl << "\tDigite 1 para continuar e 0 para sair: ";
	       cin >> continuar;
	       
	       cout << endl;
	
	    }
	
	  while (continuar ==  true);
	
	return 0;
	
	// Fonte: Responde Aí - Estruturas de repetição: while e do-while
	
	}
