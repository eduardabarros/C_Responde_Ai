
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	int idade;
	int ano_atual;
	int nascimento;
	
	cout << endl << "Digite a sua idade: ";
	
	cin >> idade;
	
	cout << "Digite o ano atual: ";
	
	cin >> ano_atual;
	
	int aniv {ano_atual - idade};
	
	int n_aniv {ano_atual - idade - 1};
	
	cout << "Se voce ja fez aniversario esse ano voce nasceu em: ";
	
	cout << aniv << endl;
	
	cout << "Se voce ainda não fez aniversario esse ano voce nasceu em: ";
	
	cout << n_aniv << endl << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Exercício
	
