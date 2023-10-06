#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[] = {1,2,3,4,5,6};
	int low = 0;
	int high = 6;
	int number;
	printf("Ingresar numero a encontrar: ");
	scanf("%i", &number);

	while(low < high) {
		int m = low + (high - low)/2;
		int value = arr[m];

		if (value == number) {
			printf("Encontrado\n");
			return 0;
		} else if (value > number) {
			high = m;	
		} else {
			low = m + 1;
		}
	}
	printf("No se encontro\n");
	return 1;
}
