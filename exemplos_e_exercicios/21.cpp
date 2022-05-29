
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	unsigned int num1;
	
	num1 = (4,000,000,000);
	
	cout << "A variavel int long ocupa " << sizeof (num1) << " bytes na memoria ram da maquina enquanto o programa esta sendo rodado.";
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Exercícios
	// O valor utilizado ultrapassa a capacidade de armazenamento de uma variável int. Seria recomendado utilizar um unsigned int que comporta valores de 0 até 4,294,967,295.
