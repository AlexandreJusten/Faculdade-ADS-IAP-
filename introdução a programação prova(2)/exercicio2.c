/*Implemente em linguagem C algoritmo que receba um número inteiro e verifique se
é par ou ímpar*/

#include<stdio.h>

void main()
{
	int valor ,cont1 ;

	printf("Insia o valor para saber se é impar ou par\n");
	scanf("%i",&valor);
cont1= valor%2;
	if (cont1==0)
	{
		printf("Esse numero é par\n");
	}
	else{
		printf("Esse numero é impar\n");
	}

}