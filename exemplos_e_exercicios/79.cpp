
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	int macas;
	float valor;
	
	cout << endl << "Digite a quantidade de maças que estão sendo compradas: ";
	cin >> macas;
	
	if (macas >= 12)
	
		{ valor = macas*0.25; }
	
	else
	
		{ valor = macas*0.3; }
		
	cout << endl << "Valor total da compra R$ " << valor << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção - if-else
	
	}
