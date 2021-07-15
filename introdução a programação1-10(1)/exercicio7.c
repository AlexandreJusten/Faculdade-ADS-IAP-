/*Um canhão atira um projétil, descrevendo a função f (t)=−9 t
2
+120 t , sendo que,
f (t) é dado em metros e t em segundos. Desenvolva algoritmo que determine
a altura do projétil. O usuário deve informar o tempo ( t ) que ele deseja saber a
altura.*/
//cod do Davi

#include <stdio.h>
#include <math.h>

void main()
{
	float a, b;

		printf("Informe o tempo em segundos para saber a altura do projeto=");
		scanf("%f",&b);

a=-9 * pow(b, 2.0) + 120 * b;
	
		printf("Altura do projetil=%.2fm\n", a);





}