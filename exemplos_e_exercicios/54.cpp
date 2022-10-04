
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando as variáveis
	float num_1, num_2, num_3;
	bool resultado_12, resultado_13, resultado_final;
	
	// Introduzindo valores
	
	cout << endl << "Primeiro número: ";
	cin >> num_1;
	cout << "Segundo número: ";
	cin >> num_2;
	cout << "Terceiro número: ";
	cin >> num_3;
	
	// Operação
	
	resultado_12 = num_1 > num_2;
	resultado_13 = num_1 > num_3;
	
	resultado_final = resultado_12 && resultado_13;
	
	// Imprimindo o resultado na tela
	
	cout << "O primeiro número é maior que o segundo e o terceiro? " << resultado_final << endl << endl;
	
	return 0;
	

	}
