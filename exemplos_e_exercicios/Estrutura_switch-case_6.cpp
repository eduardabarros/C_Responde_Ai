
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int codigo, qtd;
	float valor;
	
	// Apresentando o cardapio
	
	cout << endl << "CARDAPIO" << endl << endl;
	cout << "ITEM \t CODIGO \t PREÇO" << endl;
	cout << "Hot Dog \t 100 \t 1,20" << endl;
	cout << "Bauru Simples \t 101 \t 1,30" << endl;
	cout << "Bauru com ovo \t 102 \t 1,50" << endl;
	cout << "Hamburguer \t 103 \t 1,20" << endl;
	cout << "Cheeseburguer \t 104 \t 1,30" << endl;
	cout << "Refrigerante \t 105 \t 1,00" << endl;
	cout << "=============================" << endl;
	
	// Recebendo dados
	
	cout << endl << "Escolha um item do cardápio: ";
	cin >> codigo;
	cout << endl << "Quantidade: ";
	cin >> qtd;
	
	// Usando switch-case
	
	switch (codigo)
	
	{
	
	case 100:
		  valor = qtd * 1.20;
		  cout << endl << qtd << " cachorro-quente" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	case 101:
		  valor = qtd * 1.30;
		  cout << endl << qtd << " bauru simples" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	case 102:
		  valor = qtd * 1.50;
		  cout << endl << qtd << " bauru com ovo" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	case 103:
		  valor = qtd * 1.20;
		  cout << endl << qtd << " hamburguer" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	case 104:
		  valor = qtd * 1.30;
		  cout << endl << qtd << " chesseburguer" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	case 105:
		  valor = qtd * 1.00;
		  cout << endl << qtd << " refrigerante" << endl;
		  cout << endl << "Pague: R$ " << valor << endl << endl;
	break;
	
	default:
		  cout << endl << endl << "Item fora do cardapio" << endl << endl;
	break;
		
	}
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: switch-case
	
	}
