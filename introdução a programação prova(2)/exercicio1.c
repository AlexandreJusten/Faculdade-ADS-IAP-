/*Implemente em linguagem C algoritmo que calcule o reajuste de salário de um
colaborador de uma empresa. Considere que o colaborador deve receber um
reajuste de 15% caso seu salário seja menor que R$500,00. Se o salário for maior
ou igual a R$500,00, mas menor ou igual a R$1.000,00, seu reajuste será de 10%;
caso seja ainda maior que R$1.000,00, o reajuste deve ser de 5%.*/


#include<stdio.h>

void main()
{
	float salario ,reajuste1 ,reajuste2 ,reajuste3 ,f ,f2 ,f3;

	printf("insira o salário do colaborador para que seja feito o reajuste\n");
	scanf("%f",&salario);

	if (salario<500.00)
	{
		reajuste1= salario * 15/100;
		f = salario + reajuste1;
		printf("O reajuste aplicado foi de 15 por cento o salário agora é= %2.f\n",f);
	}
	else if((salario >= 500.00) && (salario <= 1000.00))
	{
reajuste2= salario * 10/100;
		f2 = salario + reajuste2;
		printf("O reajuste aplicado foi de 10 por cento o salário agora é= %2.f\n",f2);
	}

	else{
		reajuste3= salario * 5/100;
		f3 = salario + reajuste3;
		printf("O reajuste aplicado foi de 5 por cento o salário agora é= %2.f\n",f3);

	}


	
}
