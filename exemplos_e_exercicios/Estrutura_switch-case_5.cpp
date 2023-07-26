
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	// Declarando variáveis
	
	int num;
	
	// Inserindo dados
	
	cout << endl << "Digite um número: ";
	cin >> num;
	
	// Usando switch-case
	
	switch (num)
	
	{
	
	case 0:
		 cout << endl << num << " = zero" << endl << endl;
	break;
	
	case 1:
		 cout << endl << num << " = um" << endl << endl;
	break;
	
	case 2:
		 cout << endl << num << " = dois" << endl << endl;
	break;
	
	case 3:
		 cout << endl << num << " = três" << endl << endl;
	break;
	
	case 4:
		 cout << endl << num << " = quatro" << endl << endl;
	break;
	
	case 5:
		 cout << endl << num << " = cinco" << endl << endl;
	break;
	
	case 6:
		 cout << endl << num << " = seis" << endl << endl;
	break;
	
	case 7:
		 cout << endl << num << " = sete" << endl << endl;
	break;
	
	case 8:
		 cout << endl << num << " = oito" << endl << endl;
	break;
	
	case 9:
		 cout << endl << num << " = nove" << endl << endl;
	break;
	
	case 10:
		 cout << endl << num << " = dez" << endl << endl;
	break;
	
	default:
		cout << endl << "Somente números inteiros entre 0 e 10" << endl << endl;
	break;
	
	}
	
	return 0;
	
	// Fonte: Responde Aí - Estrutura de seleção: switch-case
	
	}
