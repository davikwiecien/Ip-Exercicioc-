/*Desenvolva algoritmo que solicite ao usuário 5 valores numéricos e some os
valores, então, extraia a raiz quarta. Apresente o resultado do cálculo ao usuário.*/

#include <stdio.h>
#include <math.h>
//mesmo icluindo a biblioteca vc deve compilar com a FLAG no GCC 
//exempo - gcc exercicio3.c -o exercicio3 -lm
//-lm é a flag

int main() {
	
	float v1, v2, v3, v4, v5, soma, raiz;
	printf("insira 5 valores para a serem somados e dados a raiz quarta\n");
	scanf("%f %f %f %f %f", &v1, &v2, &v3, &v4, &v5),
	soma=v1+v2+v3+v4+v5;
	raiz= pow(soma, (0.25));
	printf("so= %f\n",raiz);
	
	return 0;
}
