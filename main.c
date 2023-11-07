#include <stdio.h>

int main() {
    int tamanho = 7;
    int vetor[tamanho];
 
    // Solicite ao usuário que insira 7 valores inteiros
    printf("Digite 7 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
 
    // Organize o vetor em ordem crescente (usando o algoritmo de classificação de bolha)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;                 
            }
        }
    }
 
    // Imprima o vetor ordenado
    printf("Valores organizados em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
 
    return 0;
}
