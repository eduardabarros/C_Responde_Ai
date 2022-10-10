
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main()
	
	{
	
	// Declarando variáveis
	
	float valor, v_max, v;
	
	// Recebendo dados
	
	cout << endl << "Velocidade máxima permitida na avenida (km): ";
	cin >> v_max;
	cout << endl << "Velocidade com que o motorista estava dirigindo: ";
	cin >> v;
	
	// Imprimindo na tela com a condição
	
	if (v < v_max)
	
	{ cout << endl << "Velocidade permitida" << endl << endl; }
	
	else if ((v - v_max) <= 10)
	
	{ cout << endl << "Multa de R$ 50,00" << endl << endl;}
	
	else if ((v - v_max) <= 30)
	
	{ cout << endl << "Multa de R$ 100,00" << endl << endl;}
	
	else
	
	{ cout << endl << "Multa de R$ 200,00" << endl << endl; }
	
	return 0;
	
	// Fonte: Responde Aí - Estruturas de seleção: if-else
	
	}
