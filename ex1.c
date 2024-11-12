#include <stdio.h>
#include <math.h>
/* Média ponderada é o cálculo onde a soma das notas vezes seus respectivos pesos é dividida pela soma dos pesos.*/

int main()
{
	float n1, n2, n3, p1, p2, p3, mp;

	printf("Digite a primeira nota e seu respectivo peso: \n");
	scanf("%f %f", &n1, &p1);

	printf("Digite a segunda nota e seu respectivo peso: \n");
	scanf("%f %f", &n2, &p2);

	printf("Digite a terceira nota e seu peso: \n");
	scanf("%f %f", &n3, &p3);

	mp = ( n1*p1 + n2*p2 + n3*p3 ) / ( p1 + p2 + p3 );

	printf("A media ponderada das aplicacoes feitas e: %.2f", mp);
}
