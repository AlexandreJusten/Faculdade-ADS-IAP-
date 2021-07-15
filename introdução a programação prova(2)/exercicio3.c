/*Implemente em linguagem C algoritmo que apresente o perfil de uma pessoa. O
perfil da pessoa pode ser: 0 - Tímido; 1- Sonhador; 2 - Paquerador; 3 - Atraente; 4 -
Irresistível. Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil.
Por exemplo, se o ano é 2000, calculamos a soma 20 + 00, dividimos seu resultado
(20) por 5, para obter resto da divisão (0)*/

#include <stdio.h>

void main()
{
  	int ano ,op1 ,op2 ,op3;
		puts("Insira o ano de nascimento de uma pessoa para saber qual é o seu perfil.");
			scanf("%i", &ano);
op1=ano/100;
op2=ano%100;
op3=(op1 + op2)%5;


switch(op3){
	case 0: {
		puts("Tímido");
			break;
	}
	case 1: {
		puts("Sonhador");
			break;
	}
	case 2: {
		puts("Paquerador");
			break;
	}
	case 3: {
		puts("Atraente");
			break;
	}
	case 4: {
		puts("Irresistível");
			break;
	}
}

}
