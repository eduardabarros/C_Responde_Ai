
	#include<iostream>
	// biblioteca que permite trabalhar com a saída e entrada de dados
	
	using namespace std;
	// chama uma função específica da biblioteca iostream
	
	int main()
	// função principal do programa
	
	{
	
	int idade; // variável de nome idade e tipo int (inteira), é ela que armazena o valor da idade que o usuário irá digitar.
	
	cout << "Digite a sua idade: " << endl;
	cin >> idade;
	cout << "Voce tem "
	     << idade
	     << " anos" << endl;
	     
	// cout << : Isso é uma saída de dados, é oq ue queremos que o usuário veja impresso na tela.
	// cin >> : Indica que esta acontecendo uma entrada de dados e faz com que o programa espere até o usuário termine de digitar e aperte enter. As setas ">>" indicam para onde esse dado inserido pelo usuário será armazenado que, nesse caso, foi na variável idade.
	     
	return 0;
	
	}
	
	// Fonte: Responde Aí - Exemplo
