#include <stdio.h>
#include <math.h>

int main()
{
	float sa, pa, va, sn;

	printf("Sera calculado o valor que sera acrescentado ao seu salario e o valor total que recebera. Para isso, adicione o valor que recebe atualmente: \n");
	scanf("%f", &sa);

	printf("Agora, adicione o percentual de aumento: \n");
	scanf("%f", &pa);

	va= (sa * pa)/100;
	sn = va + sa;

	printf("O valor que sera acrescentado ao seu salario sera: %.2f \n Seu salario passa a ser: %.2f", va, sn);
}
