
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	int x = 5;
	float y = -13.67;
	
	cout << endl << "|y| = " << abs(y) << endl;
	cout << "Qual o maior entre 5 e -13.67? Resposta: " << fmax(x,y) << endl;
	cout << "Qual o menor entre 5 e -13.67? Resposta: " << fmin(x,y) << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Outras funções comuns da biblioteca cmath
	
	// abs(x): Calcula o valor absoluto de x (módulo)
	// fmax(x,y): Verifica qual é o maior entre x e y
	// fmin(x,y): Verifica qual é o menor entre x e y
	// round(x): Arredonda o valor de x
	// ceil(x): Arredonda o valor de x para cima
	// floor(x): Arredenda o valor de x para baixo
	// trunc(x): Arredonda o valor de x por truncamento
	
	}
