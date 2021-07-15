/*4. Um comerciante maluco cobra 10% de acréscimo para cada prestação em atraso e
depois dá um desconto de 10% sobre esse valor. Desenvolva algoritmo que solicite
o valor da prestação em atraso e apresente o valor final a pagar, assim como o
prejuízo do comerciante na operação.*/
#include <stdio.h>

 int main()
{
	int atraso, p10, soma, desconto, novo, preju;
	printf("qual é o valor da prestação em atraso?\n");
	scanf("%i",&atraso);
p10=(atraso*0.10);
soma=p10+atraso;
desconto=(soma*0.10);
novo=soma-desconto;
preju=atraso-novo;
	printf("Valor que o devendo vai pagar= %i\n",novo);
	printf("prejuizo do maluco= %i\n",preju);
	

}
