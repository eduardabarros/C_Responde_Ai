
	// Sequência de Fibonacci
	
	#include <iostream>
	
	using namespace std;
	
	int main ()
	
	{
	
	int i=0;		    // Variável de iteração
	int N;  		    // Quantidade de variáveis
	int a_n_2 = 1, a_n_1 = 1;   // Pontos iniciais da sequência
	int a_n;		    // Valor atual da sequência
	
	cout << endl << "\tQuantidade de elemento: ";
	cin >> N;
	
	cout << endl;
	
	while (i < N) 			  // O loop vai durar enquanto a variável for menor que a quantidade de termos N
	
	  {  if (i==0 || i==1)
	  
	    {  cout << "\t1";		  // Quando tiver que exibir o primeiro e segundo termo da sequência basta imprimir o número 1
	    
	      }
	    
	  else
	  
	    {  a_n = a_n_1 + a_n_2;	  // Calcula o novo termo
	    
	       cout << "\t" << a_n;	  // Imprimi o valor calculado. Tem que deixar um espaço em branco para calcular os próximos números.
	       
	       a_n_2 = a_n_1;		  // Atualiza as variáveis
	       a_n_1 = a_n;
	       
	    }
	    
	  i++;				  // Atualizando a variável de iteração
	  
	}
	
	cout << endl << endl;
	
	return 0;
	    
	// Fonte: Responde Aí - Estruturas de repetição: while e do-while	       
	
	}
