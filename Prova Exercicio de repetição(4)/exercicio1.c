/*Implemente em linguagem C algoritmo que exiba para o usuário as peças de um
tabuleiro de xadrez. Entretanto, existem algumas especificidades na disposição das
peças no tabuleiro. O tabuleiro deve possuir dimensão N x N (o usuário deve
informar a dimensão do tabuleiro). Especificidades: na diagonal do tabuleiro,
colocar as peças de xadrez 'Rei', representadas pelo número 1 e, nos outros
espaços do tabuleiro, colocar as peças 'Peão', representadas pelo número 0. É
obrigatório a utilização de estrutura de repetição para exibir cada peça no
tabuleiro. Exemplo: Para um tabuleiro com dimensões 5x5.
0 0 0 0 1
0 0 0 1 0
0 0 1 0 0
0 1 0 0 0
1 0 0 0 0
*/

 //MÉTODO 1(Melhor)

#include <stdio.h>

void main()
{
	int n;

	printf("insira o valor n para montar o tabuleiro:");
		scanf("%i",&n);
		printf("\n");
			

	for (int l = n; l >= 1;l--)
	{
		
		for (int c = 1; c <=n;c++)
		{
			
			if (c==l)
			{
				printf("1");
			}

			else
			{
				printf("0");
			}
		}

		printf("\n");
	}


}

/* MÉTODO 2(Pior)

#include <stdio.h>

void main()
{
	int n,x,y;

	printf("insira o valor n para montar o tabuleiro\n");
		scanf("%i",&n);
			x=n;

	for (int l = 1; l <= n;l++)
	{
				y=x--;	
		for (int c = 1; c <=n;c++)
		{
			
			if (c==y)
			{
				printf("1");
			}

			else
			{
				printf("0");
			}
		}

		printf("\n");
	}


}
*/