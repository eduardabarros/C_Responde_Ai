
	#include<iostream>
	using namespace std;
	int main()
	
	{
	
	// Declarando variáveis
	
	double x0, y0, z0;
	double vx, vy, vz;
	double x, y, z, t;
	
	// Introduzindo os valores
	
	cout << endl << "Insira o ponto P0: " << endl;
	cout << "\t x0: ";
	cin >> x0;
	cout << "\t y0: ";
	cin >> y0;
	cout << "\t z0: ";
	cin >> z0;
	
	cout << endl << endl << "Insira o vetor v: " << endl;
	cout << "\t vx: ";
	cin >> vx;
	cout << "\t vy: ";
	cin >> vy;
	cout << "\t vz: ";
	cin >> vz;
	
	cout << endl << endl << "Insira um valor de t: ";
	cin >> t;
	
	// Operação
	
	x = x0 + vx*t;
	y = y0 + vy*t;
	z = z0 + vz*t;
	
	// Imprimindo na tela os valores da reta
	
	cout << endl << endl << "Posição calculada: " << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí - Expressões e precedência
	
	}
