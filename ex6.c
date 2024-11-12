/* Exercício 6 = Pedro comprou um saco de ração com peso em quilos. Ele possui dois
gatos, para os quais fornece a quantidade de ração em gramas. A
quantidade diária de ração fornecida para cada gato é sempre a mesma.
Faça um programa que receba o peso do saco de ração e a quantidade de
ração fornecida para cada gato, calcule e mostre quanto restará de ração
no saco após cinco dias.*/

#include <stdio.h>
#include <math.h>

int main ()
{
	float p, qrd, qg, qtd, qts, r;

	printf("Informe o peso do saco de racao: ");
	scanf("%f", &p);

	printf("Informe a quantidade de racao diaria que cada gato recebe em quilos: ");
	scanf("%f", &qrd);

	printf("Por fim, informe a quantidade de gatos que voce possui: ");
	scanf("%f", &qg);
	
	qtd = qg * qrd;
	qts = qtd * 5;
	r = p - qts;

	printf("Assim, a quantidade final de racao que tera no saco apos 5 dias e: %.2f", r);
}
