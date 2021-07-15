/*Dada as coordenadas de dois pontos no espaço euclidiano bidimensional,
desenvolva algoritmo que informe a distância entre eles. Observe que, a partir de
dois pontos indicados no plano cartesiano (p1 e p2), podemos desenhar um
triângulo cujas medidas dos catetos a e b são dadas pelas diferenças entre as
ordenadas e abscissas desses pontos e cuja medida da hipotenusa c, dada pelo
Teorema de Pitágoras, é justamente a distância entre os pontos considerados*/

#include <stdio.h>
#include <math.h>

void main()
{
	
	float x1, x2, y1, y2, conta, conta2, conta3;

		printf("insira o valor de x1=");
			scanf("%f", &x1);
		printf("insira o valor de x2=");
			scanf("%f", &x2);
		printf("insira o valor de y1=");
			scanf("%f", &y1);
		printf("insira o valor de y2=");
			scanf("%f", &y2);

conta=pow((x1-x2), 2);
conta2=pow((y1-y2),2);
conta3=sqrt(conta + conta2);
 	

 		printf("Distancia é =%.2f\n", conta3);

}