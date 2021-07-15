/*Desenvolva algoritmo que solicite ao usuário a distância percorrida em quilômetros
e converta para centímetros.*/

#include <stdio.h>
	int main()
	{
		int x, y;

		printf ("Por favor inserir o valor para a conversão de Km para Cm\n");
		scanf ("%i", &x);
		y=x * 100000;
		printf("Resultado= %icm\n",y);

	}