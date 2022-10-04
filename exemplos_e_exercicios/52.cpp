
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// variáveis que serão comparadas
	int x=10, y=30;
	// variaveis que guardam os resultados
	bool r1, r2, r3, r4, r5, r6;
	
	r1 = (x==y);    // igualdade
	r2 = (x != y);  // desigualdade
	r3 = (x>y);     // x maior que y
	r4 = (x<y);     // x menor que y
	r5 = (x >= y);  // x maior ou igual a y
	r6 = (x <= y);  // x menor ou igual a y
	
	cout << endl << "X é igual a Y? " << r1 << endl;
	cout << "X é diferente de Y? " << r2 << endl;
	cout << "X é maior que Y? " << r3 << endl;
	cout << "X é menor que Y? " << r4 << endl;
	cout << "X é maior ou igual a Y? " << r5 << endl;
	cout << "X é menor ou igual a Y? " << r6 << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Exerício operadores booleanos
	
	}
