#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, d;

	printf("Calcularemos a distancia entre dois pontos de um plano cartesiano. Para isso, primeiro, aplique a localização do ponto A (x y): \n");
	scanf("%f %f", &x1, &y1);

	printf("Agora, aplique localização do ponto B (x y): \n");
	scanf("%f %f", &x2, &y2);

	//sqrt é o comando para aplicar a raiz quadrada no número que estiver dentro do parenteses
	/*pow é o comando para realizar potenciação, colocando o numero elevado dentro do parenteses e apos a virgula*/
	d = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

	printf("A distancia dos pontos A e B corresponde a: %.2f", d);
}
