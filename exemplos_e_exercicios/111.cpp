
	# include <iostream>
	using namespace std;
	
	int main ()
	
	{
	
	int i, num;
	bool primo = true;
	
	cout << "\n\t Digite um número: ";
	cin >> num;
	
	for (i=2;i<num;i++)
	
	{
		if (num%i == 0)
		{
		   primo = false; 
		   cout << "\t Divisivel por " << i << endl;
		}
	}
	
	if (primo == true)
	{ cout << "\t É um número primo" << endl << endl; }
	
	else 
	{ cout << "\t Não é um número primo" << endl << endl; }
	
	return 0;
	
	}
	
	// Fonte: Responde Aí
