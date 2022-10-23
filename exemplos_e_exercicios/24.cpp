
	#include<iostream>
	using namespace std;
	int main()
	
	{
	
	short int dia;
	short int mes;
	short int ano;
	
	dia = 30;
	mes = 05;
	ano = 2022;
	
	cout << "\nHoje é o dia " << dia << " do mes " << mes << " do ano de " << ano << " \n" << endl;
	cout << "A variavel dia possui " << sizeof (dia) << "byte(s)\n"
	     << "A variavel mes possui " << sizeof (mes) << "byte(s)\n"
	     << "A variavel ano possui " << sizeof (ano) << "byte(s)\n" << endl;
	     
        return 0;
        
        }
        
        // Não usei printf e nem std::cout << ... e mesmo assim printa o resultado na tela (?)
        // Fonte: Responde Aí - Memória e Modificadores
