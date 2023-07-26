
	# include<iostream>
	# include <cmath>
	using namespace std;
	
	int main ()
	
	{
	
	int n, N;
	double r, soma = 0;
	
	cout << "\n\t r = ";
	cin >> r;
	
	cout << "\t N = ";
	cin >> N;
	
	cout << "\n\tS_" << N << " = ";
	
	for (n=0;n<N;n++)
	
	{
		soma = soma + pow(r,n);
		cout << pow(r,n) << " + ";
		
	}
	
	soma = soma + pow(r,N);
	cout << pow(r,N) << " = " << soma << endl << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí - Estrutura de repetição: Laço for
