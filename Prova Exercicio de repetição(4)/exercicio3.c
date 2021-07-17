/*Implemente em linguagem C algoritmo que solicite ao usuário o primeiro termo de
uma Progressão Geométrica (PG), a razão e qual termo o usuário deseja saber.
Exiba para usuário o valor de cada termo e, a soma e o produto de todos os
termos. Exemplo: Primeiro termo: 1; Razão: 2; e Termo desejado: 6.
 Saída do software:
Termo: 1 | Valor: 1
Termo: 2 | Valor: 2
Termo: 3 | Valor: 4
Termo: 4 | Valor: 8
Termo: 5 | Valor: 16
Termo: 6 | Valor: 32
Soma dos termos da PG: 63
Produto dos termos da PG: 32768
Dica: PG - a toda sequência numérica cujos termos a partir do segundo, são iguais
ao anterior multiplicado com um valor constante denominado razão.
*/

#include <stdio.h>
#include <math.h>

void main()
{
	int pt,razao,termo,v,soma=0,produto=1;

	printf("insira o primeiro termo da PG:");
		scanf("%i",&pt);
	printf("insira a razao da PG:");
		scanf("%i",&razao);
	printf("insira o termo da PG:");
		scanf("%i",&termo);

	for (int i = pt; i <=termo;i++)
	{
			
		v=pt*pow(razao,i-1);
		printf("Termo:%i | Valor:%i\n",i,v);
		produto*=v;
		soma+=v;
	}
	

		printf("somas dos termos da PG:%i\n",soma);
		printf("Produto dos termos da PG:%i\n",produto);
	}


