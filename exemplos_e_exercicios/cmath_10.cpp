
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	double m, r, h;
	double Ix, Iy, Iz;
	
	// Recebendo os dados
	
	cout << endl << "Digite o valores em unidades do SI: " << endl;
	cout << "Massa (m) = ";
	cin >> m;
	cout << "Raio (r) = ";
	cin >> r;
	cout << "Altura (h) = ";
	cin >> h;
	
	// Operação
	
	Ix = (3*m/5)*( (pow(r,2)/4) + pow(h,2) );
	
	Iy = Ix;
	
	Iz = 3*m*pow(r,2) / 10;
	
	// Imprimindo na tela
	
	cout << endl << "Ix = " << Ix << endl;
	cout << "Iy = " << Iy << endl;
	cout << "Iz = " << Iz << endl << endl;
	
	return 0;	
	
	// Fonte: Responde Aí - biblioteca cmath
	
	}
