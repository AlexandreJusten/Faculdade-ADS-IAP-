/*Implemente em linguagem C algoritmo que leia 15 valores numéricos, e selecione
o maior e o menor valor numérico e mostra o resultado.

padrão C99 for(int i=x;i,=y;i++)
variavel i=escopo 
compilar c99 = gcc -std=c99 (nome do arquivo.c) -o (nome do arquivo de saida)
*/

#include <stdio.h>

int main()
{
    int valor,menor,maior;

    printf("Bem vindo,Você deve inserir 15 valores  para saber qual é o maior e menor entre eles\n\n");
       
            
                
            
    for (int i = 1; i <=15;i++)
    {
        printf("insira o %iº valor\n",i);
            scanf("%i",&valor);
        
          
         if (i==1)
        {
            maior=valor;
            menor=valor;
        }

        else if (valor>maior)
        {
            maior=valor;
            
        }
        else if (valor<menor)
        {
            menor=valor;
            
        }
    }
    printf("maior %i\n",maior);
    printf("menor %i\n",menor);



}