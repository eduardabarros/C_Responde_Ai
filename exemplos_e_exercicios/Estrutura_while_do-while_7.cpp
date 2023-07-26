
	#include <iostream>
	
	using namespace std;
	
	int main ()
	
	{
	
	int num, i;
	bool primo = true;
	
	cout << endl << "\t" << "Digite um número: ";
	cin >> num;
	
	i = 2;  // Por definição, números primos são divisíveis por um, por isso vamos começar os testes partindo do 2.
	
	while (i < num)
	
	  {  if (num%i == 0)  // '%' operador de resto da divisão [Ex_1: 4%2 = 0 (Primo) - Ex_2: 5%3 = 2 (Não é primo)]
	                      
	    {  primo = false;  }  // Se houver algum caso em que o resto da divisão seja zero, então o número não é primo.
	    
	    i++;  // Para saber se um número é primo, temos que tentar dividi-lo por todos os números menores do que ele.
	    
	  }
	  
	if (primo == true)
	
	  {  cout << "\tÉ primo" << endl;  }
	  
	else 
	
	  {  cout << "\tNão é primo" << endl;  }
	  
	cout << endl;
	  
	return 0;
	
	// Fonte: Responde Aí - Estruturas de repetição: while e do-while
	
	}
	  
	  
