#include <stdio.h>
#define TOTAL 5


int main(void){
	int numeros[TOTAL];
	int *ptr = numeros;
	
	for(int i = 0; i < TOTAL; i++) {
		printf("Numero %d: ", i + 1);
		if(scanf("%d", ptr + i) != 1) return 1;
	}
	
	for (int i = 0; i < TOTAL; i++) {
		printf("%d\n", *(ptr + i));
	}
	
	return 0;
}
