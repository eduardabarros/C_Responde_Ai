
	#include <iostream>
	using namespace std;
	int main ()
	
	{
	
	float f = 25.5;
	
	int i;
	
	i = static_cast <int> (f);
	
	cout << "O valor de f eh " << f << endl;
	cout << "O valor de i eh " << i << endl;
	
	}
	
	// Fonte: Responde Aí - Exemplo
	// Conversão de tipo de uma variável em outra
	// Não é recomendado usar o static_cast para valores muito grandes que podem exceder o limite aceitável para a variável que será usada.
