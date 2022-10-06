
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando as variáveis
	
	float a, b, c;
	
	// Inserindo dados
	
	cout << endl << "Digite um valor para o cateto a: ";
	cin >> a;
	cout << "Digite um valor para o cateto b: ";
	cin >> b;
		
	// Operação
	
	c = sqrt(pow(a,2) + pow(b,2));
	
	// Imprimindo na tela
	
	cout << "O valor da hipotenusa deste triângulo retângulo é: c = " << c << endl << endl;
	
	
	return 0;
	
	
	// Fonte: Responde Aí - biblioteca cmath
	
	}
