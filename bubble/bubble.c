#include <stdio.h>

int main(void) 
{
	int array[5] = {1, 2, 4, 3, 5};
	int size = 5;

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size - 1 - i; j++) {
			if(array[j] > array[j + 1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
	for(int k = 0; k < size; k++) {
		printf("%i", array[k]);
	}
	printf("\n");
}
