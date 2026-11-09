#include <stdio.h>


int main(void) {
	int numeros[6] = {10, 20, 30 ,40 ,50 ,60};
	int *ptr = numeros;
	
    for (int i = 0; i < 6; i++){
    	printf("%d\n", *(ptr + i));
	
	}
	return 0;

}
