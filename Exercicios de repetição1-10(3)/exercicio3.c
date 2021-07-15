/*Implemente em linguagem C algoritmo que calcule e escreve a seguinte soma:
soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.*/

#include <stdio.h>

void main()
{
   int i=1,x=1,soma;

   for (i,x;i <=50;i++,x +=2 )
   {
      soma+=x/i;
   }
   printf("soma=%i\n",soma);
}