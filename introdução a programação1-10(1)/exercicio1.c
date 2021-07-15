/*Desenvolva algoritmo que solicite ao usuário 5 valores numéricos e calcule a média
aritmética simples.
*/

#include <stdio.h>
	float main() {

	float x, y , a, b, c, r, d;

	printf("Digite 5 valores \n");
	scanf("%f %f %f %f %f", &x, &y ,&a ,&b ,&c);
 r=x+y+a+b+c;
 d = (float) r/ 5;
	printf("Resultado= %.2f\n",d);
 }