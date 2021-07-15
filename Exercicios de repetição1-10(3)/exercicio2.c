/*Implemente em linguagem C algoritmo que gere números entre 1000 e 1999 e
mostra aqueles que divididos por 11 dão resto 5*/

#include <stdio.h>

void main ()
{
	
		printf("Os valores entre 1000 e 1999 que divididos dão resto 5 são\n");


	for (int i = 1000; i <=1999;i++)
	{
	
	if (i%11==5)
	{
		printf("%i\n",i);
	}
	}


}