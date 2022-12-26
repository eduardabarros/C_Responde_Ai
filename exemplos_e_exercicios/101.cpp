
	#include <iostream>
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	
	using namespace std;
	
	int main ()
	
	{
	
	float num_1, num_2, resultado;
	char operacao;
	bool condicao = true;
	
	  do
	  
	    {  cout << endl << endl << "\tEscolha uma operação (+ - * /): ";
	       cin >> operacao;
	       
	       cout << endl << "\t" << "Primeiro número: ";
	       cin >> num_1;
	       cout << "\t" << "Segudo número: ";
	       cin >> num_2;
	       
	         switch (operacao)
	         
	           {  case '+':
	              resultado = num_1 + num_2;
	              cout << "\t" << num_1 << " + " << num_2 << " = " << resultado << endl;
	              break;
	              
	              case '-':
	              resultado = num_1 - num_2;
	              cout << "\t" << num_1 << " - " << num_2 << " = " << resultado << endl;
	              break;
	              
	              case '*':
	              resultado = num_1 * num_2;
	              cout << "\t" << num_1 << " * " << num_2 << " = " << resultado << endl;
	              break;
	              
	              case '/':
	              resultado = num_1 / num_2;
	              cout << "\t" << num_1 << " / " << num_2 << " = " << resultado << endl;
	              break;
	              
	              case '0':
	              cout << "\t" << "Finalizando o programa" << endl << endl;
	              condicao = false;
	              break;
	              
	              default:
	              cout << "\t" << "Comando invalido" << endl << endl;
	              break;
	              
	            }
	            
	          cout << endl << "\tDigite 1 para continuar e 0 para sair: ";
	          cin >> condicao;
	       
	          cout << endl;
	            
	        }
	
	  while (condicao == true);
	    
	return 0;
	
	// Fonte: Responde Aí - Estruturas de repetição: while e do-while
	
	}
