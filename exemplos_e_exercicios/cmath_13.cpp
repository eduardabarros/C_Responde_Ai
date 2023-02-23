
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	double x1, y1, x2, y2, d;
	
	// Recebendo valores
	
	cout << endl << "Ponto 1: " << endl;
	cout << "\t x1 = ";
	cin >> x1;
	cout << "\t y1 = ";
	cin >> y1;
	
	cout << endl << "Ponto 2: " << endl;
	cout << "\t x2 = ";
	cin >> x2;
	cout << "\t y2 = ";
	cin >> y2;
	
	// Operação
	
	d = sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
	
	// Imprimindo na tela
	
	cout << endl << "Distância = " << d << endl << endl;
	
	return 0;	
	
	// Fonte: Responde aí - biblioteca cmath
	
	}
