
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	double x, f, g;
	double maior;
	
	// Pedindo valores
	
	cout << endl << "Digite um valor para x: ";
	cin >> x;
	
	// Operação
	
	f = exp2(cos(x));
	
	g = exp(sin(x));
	
	maior = fmax(f,g);
	
	// Imprimindo na tela
	
	cout << endl << "2 elevado ao cosseno de x é: f = " << f << endl;
	cout << "e elevado ao seno de x é: g = " << g << endl;
	cout << "O maior valor entre os dois apresentados acima é: " << maior << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - biblioteca cmath
	
	}
