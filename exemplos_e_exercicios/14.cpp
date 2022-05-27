
		
	#include <iostream>
	using namespace std;
	int main()
	
	{
	
	float g {9.8}; 		// [m/s²]
	float t {7.5}; 		// [s]
	float v0 {0.75}; 	// [m/s]
	float h;
	
	h = v0*t + g*t*t/2;	// [m]
	
	std::cout << h << std::endl;
	
	}
	
	// Movimento Retilíneo Uniformemente Variado
	// Fonte: Responde Aí - Exercício
