/* João foi desafiado por seu irmão, José. O desafio era calcular quantos grãos de
arroz são possíveis colocar em um tabuleiro de xadrez de dimensão N x N (o
usuário deve informar a dimensão do tabuleiro), de tal forma que o primeiro quadro
contivesse apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Implemente em linguagem C, algoritmo que exiba para o usuário a
quantidade de grãos em cada quadro e a quantidade total de grãos no tabuleiro.
Exemplo: Tabuleiro 2 x 2; Total de grãos é 15;*/

#include <stdio.h>

void main()
{
    int x, y, s = 0, a = 1;

    printf("Entre com o tamanho do x: ");
    scanf("%i", &x); 

    for ( int i = 0; i < x; i++ ) {
        for ( int j = 0; j < x; j++ ) {
            printf("%i", a); 
            s += a; 
            a *= 2; 
        }
        printf("\n");
    }

    printf("\nSoma = %i\n", s); 

    
}
