/*Sob certas condições, o número de bactérias B, de uma cultura, em função do
tempo t, medido em horas, é dado por B(t) = 2t/12
. Desenvolva algoritmo que
determine o número de bactérias após a hora zero. O usuário deve informar o dia
que ele deseja saber o número de bactérias.*/

#include <stdio.h>
#include <math.h>

float main()
{
	float mat1, mat2, diassaber, mat3;
	//int mat3;

 
		printf("Informe o dia para saber o numero de bacterias=\n");
		scanf("%f",&diassaber);

mat1=diassaber*24;
mat2=mat1/12;
mat3=pow(2,mat2);

		printf("numero de bacterias é = %.2f\n",mat3);





	}