
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	float a, b, c, delta, x, x1, x2;
	
	cout << endl << "Digite um valor para a: ";
	cin >> a;
	
	cout << endl << "Digite um valor para b: ";
	cin >> b;
	
	cout << endl << "Digite um valor para c: ";
	cin >> c;
	
	delta = pow(b,2) - (4*a*c); 
	
	cout << endl << "Delta = " << delta << endl;
	
	if (delta > 0)
	
	{ 
	
		x1 = ( -b + sqrt(delta) ) / (2*a) ;
	
		x2 = ( -b - sqrt(delta) ) / (2*a) ;
	
		cout << endl << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl << endl;
	
	}
	
	else if (delta < 0)
	
		{ cout << endl << "Sem solução." << endl << endl; }
	
	else
	
		{ 
		
		  x = -b / (2*a); 
		
		  cout << endl << "x1 = x2 = " << x << endl << endl;
		  
		}
	
	
	// Fonte: Responde Aí - Estrutura de seleção if-else
	
	}
