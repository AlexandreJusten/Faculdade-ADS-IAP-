/*A papelaria do Miltinho precisa frequentemente ajustar o preço do Xerox. Para
facilitar o cálculo para os clientes da papelaria, Miltinho costuma imprimir uma folha
com o valor para diferentes quantidades de cópias e fixa na parede loja. Miltinho
também costuma dispor na folha os dados em forma de tabela com 10 colunas e
quantidade de linhas diferentes, conforme seu humor. Então, implemente em
linguagem C algoritmo que receba o valor atual do Xerox (um número real) e a
quantidade de linhas que será impresso na folha. Exemplo: Preço por folha (R$):
0,10; Número de linhas: 3.
1= 0,10 2= 0,20 3= 0,30 4= 0,40 5= 0,50 ... 10= 1,00
11= 1,10 12= 1,20 13= 1,30 14= 1,40 15= 1,50 ... 20= 2,00
21= 2,10 22= 2,20 23= 2,30 24= 2,40 25= 2,50 ... 30= 3,00
Observação: Todos os algoritmos devem apresentar o resultado ao usuário.

*/

#include <stdio.h>

void main()
{

	int n,x=1;
	float valor=0.10;

	printf("insira o numero de Linhas:");
		scanf("%i",&n);

		for (int l = 1; l <=n ;l++)
			{
			for (int c = 1; c <=10;c++)
				{

				printf("%i=%.2f\t",x++,x*valor);

				}
			printf("\n");
			}

}