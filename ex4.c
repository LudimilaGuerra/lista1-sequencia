/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/
#include <stdio.h>
#include <math.h>
// significado das variáveis: c = valor de um depósito, i = valor da taxa de juros, j = rendimento, j + c = vt = valor total. t = tempo 
// m = rendimento dos juros compostos 

int main ()
{
	float c, i, j, vts, t, vtc, m;

	printf("Vamos calcular o valor de rendimento, de uma aplicacao que sofre juros, e o valor total, sendo o rendimento junto ao capital inicial, o que foi aplicado. Para isso, preciso que voce indique seu capital, o valor que foi aplicado: ");
	scanf("%f", &c);

	printf("Agora, indique o valor da taxa de juros dessa aplicacao, em porcentagem: ");
	scanf("%f", &i);

	printf("Por fim, apresente o tempo que essa aplicacao ficara ativa, em meses: ");
	scanf("%f", &t);

	j = c * i / 100 * t;
	vts = j + c;
	m = c * pow((1 + i / 100), t);
	vtc = c + m;

	printf("Seu rendimento simples foi de %.2f e o valor total recebido no juros simples foi %.2f \n o valor total recebido em uma aplicacao em juros compostos foi de %.2f, obtendo um montante de %.2f", j, vts, vtc, m);
	
}
