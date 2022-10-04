
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declaração das variáveis
	
	double momento;
	double altura;
	double c;
	double momento_de_inercia;
	double fator_de_seg;
	double tensao;
	double tensao_adm;
	
	// Introdução dos valores
	
	cout << endl << "Digite o momentum: ";
	cin >> momento;
	
	cout << "Digite a altura: ";
	cin >> altura;
	
	cout << "Digite o momento de inercia: ";
	cin >> momento_de_inercia;
	
	cout << "Digite o fator de segurança: ";
	cin >> fator_de_seg;
	
	// Calculo
	
	c = altura/2 ;
	
	tensao = (momento*c)/momento_de_inercia;
	
	tensao_adm = tensao/fator_de_seg;
	
	// O que vai ser impresso na tela
	
	cout << endl << "O valor da tensão sobre a viga é: " << tensao << endl;
	cout << "O valor da tensão admissível sobre a viga é: " << tensao_adm << endl << endl;
	
	return 0;
	
	// Fonte: Responde Aí
	// Tensão que atua sobre uma viga. Unidades no SI (N, m, Pa).
	
	}
