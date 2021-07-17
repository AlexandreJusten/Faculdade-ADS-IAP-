/*Implemente em linguagem C algoritmo que exiba para o usuário as peças de um
tabuleiro de xadrez. Entretanto, existem algumas especificidades na disposição das
peças no tabuleiro. O tabuleiro deve possuir dimensão N x N (o usuário deve
informar a dimensão do tabuleiro). Especificidades: em cada linha do tabuleiro,
colocar as peças de xadrez 'Rei', representadas pelo número 1 e, nos outros
espaços do tabuleiro, colocar as peças 'Peão', representadas pelo número 0. É
obrigatório a utilização de estrutura de repetição para exibir cada peça no
tabuleiro. Exemplo: Para um tabuleiro com dimensões 5x5.
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1

*/

#include <stdio.h>

void main()
{
	int n;

	printf("Insira o valor N para montar o tabuleiro:");
		scanf("%i",&n);

		for (int l = 1; l <=n;l++)
		{
			for (int c = 1; c <=n;c++)
			{
				if (l%2!=0)
				{
					printf("1");
				}
				else{
					printf("0");
				}
			}
			printf("\n");
		}
}