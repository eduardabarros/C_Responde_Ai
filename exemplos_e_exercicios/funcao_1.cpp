
	#include <iostream>
	using namespace std;
	
	int soma()
	
	{
		int num_1, num_2;
		cout << "\n\t Digite um numero: ";
		cin >> num_1;
		cout << "\t Digite outro numero: ";
		cin >> num_2;
		return num_1 + num_2;
	 }
	 
	 int main()
	 
	 {
	 	int valor;
	 	valor = soma();
	 	cout << "\t O valor da soma e: " << valor << endl << endl ;
	 	return 0;
	  }
		
