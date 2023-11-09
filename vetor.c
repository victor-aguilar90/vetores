#include <stdio.h>

int main () {

	int numeros[10];
	int i;

	for (i=0; i<10;i++) {
		printf("Digite o %d número: ", i+1);
		scanf("%d", &numeros[i]);
	}

	for (i=0; i<10; i++) {
		numeros[i]=numeros[i]*2;
	}

	for (i=0; i<10; i++) {
		printf("Valor de numeros [%d] = %d \n", i, numeros[i]);
	}
}

