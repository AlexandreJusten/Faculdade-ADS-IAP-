/*Implemente em linguagem C algoritmo que desenhe um triângulo na tela, o
tamanho do triângulo deve ser informado pelo usuário. Ex: Usuário digitou 5.
#
##
###
####
#####
*/

#include <stdio.h>

void main()
{
	int valor;

		printf("insira um valor para desenhar o triangulo\n");
			scanf("%i",&valor);


	for (int l = 1; l <= valor;l++)
	{
		for (int c= 1; c<=l;c++)
		{
			printf("%c",35);
		}
		printf("\n");
	}


}