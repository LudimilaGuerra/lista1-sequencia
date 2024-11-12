#include <stdio.h>

int main()
{
	float sec, min, horas, dias;
	printf("Digite uma quantidade de segundos: ");
	scanf("%f", &sec);
	
	min = sec / 60;
	horas = min / 60;
	dias = horas / 24;
	
	printf("%f segundos sao iguais a: \n %f minutos \n %f horas \n %f dias", sec, min, horas, dias);
}
