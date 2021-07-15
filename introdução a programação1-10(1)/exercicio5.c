//5. Dados um capital C, uma taxa de juros mensal fixa J e um período de aplicação em
//meses M. Desenvolva algoritmo que informe o montante F no final do período.

#include <stdio.h>
#include <math.h>

float main()
{

float capital, juros, meses, cal1, cal2;
int cal3;
	
	printf("Digite o valor do capital:");
	scanf("%f,",&capital);

		printf("Digite a taxa de juro mensal fixa:");
		scanf("%f",&juros);

			printf("Digite o periodo de meses:");
			scanf("%f",&meses);

cal1=(1 + juros/100);
cal2=pow(cal1, meses);
cal3= cal2*capital;

	printf("Montante é =%i\n",cal3);


}