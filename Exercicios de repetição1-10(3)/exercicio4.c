/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma
de seus divisores positivos diferentes de n e maior que zero. Implemente em
linguagem C, algoritmo que verifique se um dado número é perfeito. 
Ex: 6 é perfeito. 
6 (resto da divisão por) 1 = 0; (Ok)
6 (resto da divisão por) 2 = 0; (Ok)
6 (resto da divisão por) 3 = 0; (Ok)
6 (resto da divisão por) 4 = 2; (não Ok)
6 (resto da divisão por) 5 = 1; (não Ok)
1 + 2 + 3 = 6 (perfeito)*/

#include <stdio.h>

int main(){
   
    int valor,de,soma=0;
   
        printf("insira um valor inteiro e positivo para saber se ele é Perfeito\n");
            scanf("%i",&valor);
  if (valor>=0)
  {
   
    for(int i=1;i<valor;i++)
    {
            de=valor % i;

            	if(valor%i==0)
            	{
            		printf("%i Resto da divisão por %i=0(Ok)\n",valor,i);
            		soma+=i;
            		
          		}

            	else if(valor%i>0)
            	{
                	printf("%i Resto da divisão por %i=%i(Não Ok)\n",valor,i,de);
                }
                
    }

    if (soma==valor)
    {
    	printf("O numero %i é perfeito\n",valor);
    }
    else{
    	printf("o numero é %i é imperfeito\n",valor);
    }
  }
  else{
  	printf("valor inserido é negativo\n");
  }
}