/*Implemente em linguagem C algoritmo que leia um valor numérico inteiro e
apresente por extenso o nome do mês correspondente ao valor entrado. Caso
sejam fornecidos valores menores que 1 e maiores que 12, o programa deve
apresentar a mensagem “Valor inválido”.
*/

#include<stdio.h>

void main()
{
	int valor;

	printf("insira o valor\n");
	scanf("%i",&valor);

	if ((valor >= 1) && (valor <= 12))
	{
		switch(valor){

						case 1: {
		puts("Janeiro");
			break;}
						case 2: {
		puts("Fevereiro");
			break;}
						case 3: {
		puts("março");
			break;}
						case 4: {
		puts("abril");
			break;}
						case 5: {
		puts("maio");
			break;}
						case 6: {
		puts("junho");
			break;}
						case 7: {
		puts("julho");
			break;}
						case 8: {
		puts("agosto");
			break;}
						case 9: {
		puts("setembro");
			break;}
						case 10: {
		puts("outubro");
			break;}
						case 11: {
		puts("novembro");
			break;}
						case 12: {
		puts("dezembro");
			break;}

		}
	}
	else{
printf("Valor inválido\n");
	}
}