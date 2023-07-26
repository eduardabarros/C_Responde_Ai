
	# include <iostream>
	using namespace std;
	
	int main ()
	
	{
	
	int num, i;
	
	cout << "\n\tDigite um número: ";
	cin >> num;
	
	for (i=1;i<=num;i++)
	
	{	
		if  (i%2==0)
	
		{ cout << "\n\t" << i << " é par" << endl; }
		
		else
		
		{ cout << "\n\t" << i << " é impar" << endl; }
	
	}
	
	cout << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Estrutura de repetição: Laço for
