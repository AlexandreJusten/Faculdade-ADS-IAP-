/*Implemente em linguagem C algoritmo que receba:
• o código do estado de origem da carga de um caminhão, supondo que a digitação
do código do estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
• o peso do caminhão em toneladas;
• o código da carga, supondo que a digitação do código seja sempre válida, isto é,
um número inteiro entre 10 e 40;
Código do Estado Imposto Código da carga Preço por quilo (R$)
1 35% 10 a 20 100
2 25% 21 a 30 250
3 15% 31 a 40 340
4 5%
5 Isento
Calcule e mostre:
• o peso da carga do caminhão convertido em quilos;
• o preço da carga do caminhão;
• o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do
caminhão e depende do estado de origem;
• o valor total transportado pelo caminhão, preço da carga mais imposto.
Observação: Todos os algoritmos devem apresentar o resultado ao usuário.
*/

#include <stdio.h>

void main()
{
	float peso , op1 ,codcargaop ,total ,estado;
	int cod ,codcarga;

	printf("Insira o codigo do seu estado entre 1-5\n");
		scanf("%i",&cod);
		printf("insira o peso do caminhão em toneladas\n");
			scanf("%f",&peso);
			printf("insira código da carga entre 10-40\n");
				scanf("%i",&codcarga);

//o peso da carga do caminhão convertido em quilos;
op1=peso*1000;
printf("o peso da carga do caminhão convertido em quilos é= %2.fkg\n",op1);
//o preço da carga do caminhão de acordo com o cod de estado;

if ((codcarga>=10)&&(codcarga<=20))
{
	codcargaop=op1*100;
	printf("o preço da carga do caminhão de acordo com o codigo de carga 10-20 é =R$%2.f\n",codcargaop);
}
else if((codcarga>=21)&&(codcarga<=30))
{
codcargaop=op1*250;
	printf("o preço da carga do caminhão de acordo com o codigo de carga 21-30 é =R$%2.f\n",codcargaop);
}
else if((codcarga>=31)&&(codcarga<=40))
{
	codcargaop=op1*340;
	printf("o preço da carga do caminhão de acordo com o codigo de carga 31-40=R$%2.f\n",codcargaop);
}

switch(cod){

						case 1: {
							estado=0.35;
		puts("Codigo do Estado 1 =35%, de imposto");
			break;}
						case 2: {
							estado=0.25;
		puts("Codigo do Estado 2 =25%, de imposto");
			break;}
						case 3: {
							estado=0.15;
		puts("Codigo do Estado 3 =15%, de imposto");
			break;}
						case 4: {
							estado=0.05;
		puts("Codigo do Estado 4 =5%, de imposto");
			break;}
						case 5: {
							estado=0;
		puts("Codigo do Estado 5 =Isento de imposto");
			break;}

}

total=codcargaop + (codcargaop*estado);

printf("o valor total transportado pelo caminhão, preço da carga mais imposto é = R$%2.f\n",total);
}
