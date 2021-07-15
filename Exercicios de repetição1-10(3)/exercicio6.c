/*Implemente em linguagem C algoritmo que calcule N! (fatorial de N), sendo que o
valor inteiro de N é fornecido pelo usuário. Sendo que:
a) 0! = 1, por definição; e
b) N! = 1 * 2 * 3 * ...* (N – 1) * N.
*/
#include <stdio.h>

void main()
{
	int valor,op=1;
	
		printf("Insira um valor para calcular o fatorial\n");
			scanf("%i",&valor);
			
	if (valor==0)
	{
		printf("0!=1");
	}
	else{
		for (int i = 1; i <=valor;i++)
		{
			op*=i;
		}
		printf("%i!=%i\n",valor,op);
	}
}

/*
#include <stdio.h>

void main()
{
	int valor,i;
	
		printf("Insira um valor para calcular o fatorial\n");
			scanf("%i",&valor);
			
	if (valor==0)
	{
		printf("0!=1");
	}
	else{

		for(i = 1; valor > 1; valor =valor-1)
		{
			i = i * valor;
			
		}
	printf("%i!=%i\n",valor,i);	
	}
}
*/