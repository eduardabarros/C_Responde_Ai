
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	float theta;
	const float PI = 3.1415;
	
	// Pedindo os dados
	
	cout << endl << "Ângulo em graus: ";
	cin >> theta;
	
	// Conversão
	
	theta = theta*(PI/180);
	
	// Imprimindo na tela
	
	cout << "Seno: " << sin(theta) << endl;
	cout << "Cosseno: " << cos(theta) << endl;
	cout << "Tangente: " << tan(theta) << endl << endl;
	
	return 0; 	
	
	// Fonte: Responde Aí - biblioteca cmath
	
	}
