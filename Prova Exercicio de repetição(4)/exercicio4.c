/*Implemente em linguagem C algoritmo que solicite ao usuário o primeiro termo de
uma Progressão Aritmética (PA), a razão e qual termo o usuário deseja saber.
Exiba para usuário o valor de cada termo e, a soma e o produto de todos os
termos. Exemplo: Primeiro termo: 1; Razão: 2; e Termo desejado: 6. 
 Saída do software: 
Termo: 1 | Valor: 1
Termo: 2 | Valor: 3
Termo: 3 | Valor: 5
Termo: 4 | Valor: 7
Termo: 5 | Valor: 9
Termo: 6 | Valor: 11
Soma dos termos da PA: 36
Produto dos termos da PA: 10395
Dica: PA - a toda sequência numérica cujos termos a partir do segundo, são iguais
ao anterior somado com um valor constante denominado razão.
*/

#include <stdio.h>
#include <math.h>

void main()
{

    int pt,razao,termo,v=1,produto=1,soma=0;

    printf("Insira o primeiro termo da PA:");
        scanf("%i",&pt);
    printf("Insira a razão da PA:");
        scanf("%i",&razao);
    printf("Insira o numero de Termos da PA:");
        scanf("%i",&termo);
        v=pt;

        for (int i = pt; i <=termo;i++)
        {
            soma+=v;
            produto*=v;
           printf("Termo:%i | Valor:%i\n",i,v);
           v+=razao;
        }

        printf("somas dos termos da PA:%i\n",soma);
        printf("Produto dos termos da PA:%i\n",produto);
}