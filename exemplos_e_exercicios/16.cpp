
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	float u_estatico {0.6};
	float u_dinamico {0.4};
	float normal {10};
	float atrito_estatico { normal * u_estatico };
	float atrito_dinamico { normal * u_dinamico };
	
	std::cout << atrito_estatico << std::endl;
	std::cout << atrito_dinamico << std::endl;
	
	return 0;
	
	}
	
	// fat_estatico = u_estatico * N
	// fat _dinamico = u_dinamico * N
	
	// Fonte: Responde Aí - Exercícios
