/*Faça um programa que receba um número positivo e maior que zero,
calcule e mostre: a) o número ao quadrado, b) o número ao cubo, c) a raiz quadrada dele, c) a raiz cubica.*/

#include <stdio.h>
#include <math.h>

int main() 
{
	float n, q, c, rq, rc;

	printf("Digite um número positivo e maior que zero: ");
	scanf("%f", &n);

	q = n * n;
	c = pow(n, 3);
	rq = sqrt(n);
	rc = cbrt(n);

	printf("O quadrado de %.2f é %.2f \n O cubo desse numero: %.2f \n A raiz quadrada dele: %.2f \n A raiz cubica dele: %.2f", n, q, c, rq, rc);
	
}
