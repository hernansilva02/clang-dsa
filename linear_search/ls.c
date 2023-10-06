#include <stdio.h>

int main(void) {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = 6;
	int number;
	printf("Ingresar numero: ");
	scanf("%i", &number);

	for(int i = 0; i <= size; i++) {
		if (arr[i] == number) {
			printf("Encontrado!\n");
			return 0;
		}
	}
	printf("No se encontro\n");
	return 1;
}
