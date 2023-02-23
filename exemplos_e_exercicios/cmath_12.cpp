
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float alpha, h, c1, c2;
	const float PI = 3.1415;
	
	// Recebendo valores
	
	cout << endl << "Alpha = ";
	cin >> alpha;
	cout << "Hipotenusa = ";
	cin >> h;
	
	// Operações
	
	alpha = (alpha*PI)/180; 	// Convertendo graus em radianos
	
	c1 = cos(alpha)*h;
	
	c2 = sin(alpha)*h;
	
	// Imprimindo na tela
	
	cout << endl << "Cateto menor = " << min(c1,c2) << endl;
	cout << "Cateto maior = " << max(c1,c2) << endl;
	cout << "Hipotenusa = " << h << endl << endl;
	
	return 0;	
	
	// Fonte: Responde Aí - biblioteca cmath
	
	}
