#include <stdio.h>


int main(void) {
	int numeros[3] = {10, 20, 30};
	int *ptr = numeros;
	printf("Primeiro: %d\n", *ptr);
	return 0;
}
