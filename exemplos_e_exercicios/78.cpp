
	#include<iostream>
	using namespace std;
	int main ()
	
	{
	
	float media;
	float recuperacao;
	
	cout << endl << "Digite a sua media: ";
	cin >> media;
	
	if (media >= 7)
	
		{ cout << endl << "Aluno aprovado!" << endl << endl; }
		 
	else if (media >= 4)
	
		{ 
		
		  cout << endl << "Aluno de recuperação." << endl; 
		  cout << endl << "Insira a sua nota de recuperação: ";
		  cin >> recuperacao;
		  
		  if (recuperacao >= 6)
		  
		  	{ cout << endl << "Aluno aprovado!" << endl << endl; }
		  	
		  else
		  
		  { cout << endl << "Aluno reprovado." << endl << endl; }
		  
		}
		
	else
	
		{ cout << endl << "Aluno reprovado." << endl << endl; }
		
	return 0;
	
	// Fonte: Responde Aí - Estrutura de programação: if-else
	
	}
