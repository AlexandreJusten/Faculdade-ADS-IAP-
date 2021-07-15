/*.Implemente em linguagem C algoritmo que solicite um número inteiro, com base no
número fornecido pelo usuário mostre todas as tabuadas (1-10) começando da
tabuada 1*/

#include <stdio.h>

void main()
{

	int valor;

		printf("Insira um valor para a tabuada\n");
			scanf("%i",&valor);

	for (int i = 1; i <=valor;i++)
		{
			for (int x = 1; x <=10; x++)
			{
				printf("%ix%i=%i\n",i,x,i*x);
			}
			printf("\n");
		}	


}