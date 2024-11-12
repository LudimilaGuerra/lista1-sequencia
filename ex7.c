/*Escreva um aplicativo que insere um número consistindo em cinco dígitos
do usuário, separa o número em seus dígitos individuais e imprime os
dígitos separados uns dos outros por três espaços cada. Por exemplo, se o
usuário digitar o número 42339, o programa deve imprimir: 4  2 3 3 9 */

#include <stdio.h>
#include <math.h>

int main()
{
	int n, u, d, c, m, mi;
	printf("Digite um numero de 5 digitos: ");
	scanf("%d, &n);

	u = n % 10;
	d = ((n % 100) - u)/ 100;
	c = ((n % 1000) - (d + u )) / 100;
	m = ((n % 10000) - (c + d + u)) / 1000;
	mi = ((n % 100000) - (m + c + d + u )) / 10000;

	printf("%d  %d  %d  %d  %d", mi, m, c, d, u);
}
