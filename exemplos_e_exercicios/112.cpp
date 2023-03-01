
	# include <iostream>
	using namespace std;
	
	int main ()
	
	{
	
	float F;
	float C=-20;
	
	for (C = -20 ; C <= 30 ; C += 5)
	
	{
		F = 32 + ((212-32)*C)/100;
		
		cout << "\n\t" << C << "ºC \t F = " << F << endl;
	
	}
	
	cout << endl;
	
	return 0;
	
	}
	
	// Fonte: Responde Aí
