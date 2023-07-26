
	# include <iostream>
	using namespace std;
	
	int main ()
	
	{
	
	int a_n_2 = 1, a_n_1 = 1, a_n;
	int n, N;
	
	cout << "\n\t Quantos termos? Resposta: ";
	cin >> N;
	
	cout << "\n\t ";
			
	for (n=0;n<N;n++)
	
	{
		if (n==0 || n==1)  // Quando for exibir o primeiro e o segundo termo da sequência
		{ cout << "1 "; } 
		
		else
		{
		
		a_n = a_n_1 + a_n_2; // calcula o novo termo
		cout << a_n << " ";  // imprimi
		
		a_n_2 = a_n_1;       // atualizando o valor de a_n_2
		a_n_1 = a_n;         // atualizando o valor de a_n_1
		
		}
	
	}
	
	cout << endl << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Estrutura de repetição: Laço for - Sequência de Fibonacci
