#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
 
	int lista[10];
	int i;
	for (i=0;i<10;i++){
		printf("Digite um numero para a posicao %d:",i);
		scanf("%d",&lista[i]);
		lista[i] = lista[i] * 2; //calcula o dobro e guarda na mesma posicao
	}
 
	printf("Valores dobrados:\n");
	for (i=0;i<10;i++) {
		printf("Posicao %d: %d\n",i,lista[i]);
	}
	return 0;
}
