
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float x, f, g;
	
	// Pedindo os dados
	
	cout << endl << "Digite um valor para x: ";
	cin >> x;
	
	// Operação
	
	g = log10(abs(x));
	
	f = (pow(5,g))/2;
	
	// Imprimindo na tela
	
	cout << "f(g("<< x <<")) = " << f << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aó - biblioteca cmath
	
	}
