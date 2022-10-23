
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	int i;
	unsigned int i_positivo;
	long long int i_longo;
	float f;
	double d;
	char c;
	bool b;
	
	cout << "O tamanho de um int: " << sizeof (i) << " byte(s)\n"
	     << "O tamanho de um usigned int: " << sizeof (i_positivo) << " byte(s)\n"
	     << "O tamanho de um long long int: " << sizeof (i_longo) << " byte(s)\n"
             << "O tamanho de um float: " << sizeof (f) << " byte(s)\n"
	     << "O tamanho de um double: " << sizeof (d) << " byte(s)\n"
	     << "O tamanho de um char: " << sizeof (c) << " byte(s)\n"
	     << "O tamanho de um boolean: " << sizeof (b) << " byte(s)\n";

	std::cout << i << std::endl;
	std::cout << i_positivo << std::endl;
	std::cout << i_longo << std::endl;
	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	
	
	return 0;
	
	}
	
	// Como printar na tela esse resultado de uma form mais rápida sem precisar usar tantos 'std::cout << ... '
	// Fonte: Responde Aí - Memória e Modificadores
