#include <stdio.h>

int somar(const int *vetor, int tamanho){
	int soma = 0;
	for(int i = 0; i < tamanho; i++){
		soma += *(vetor + 2);
	}
	return soma;
}


int main(void){
	int numeros[5] = {10,20,30,40,50};
	printf("Soma: %d\n", somar(numeros,5));
	
	return 0;
}
