#include <stdio.h>

int main(void) 
{
    int size (int array[]);
    int arr[5] = {1, 4, 25, 5, 8};
    int largo = size(arr); 
    printf("El size es: %i\n", largo);

    for (int j = 0; j < largo; j++) {
        for (int k = 0; k < largo - 1 - j; k++) {
            if (arr[k] > arr[k + 1]) {
                int tmp = arr[k + 1];
                arr[k] = arr[k+1];
                arr[k+1] = tmp;
            }
        }
    }
    //imprimo el nuevo array
    for (int l = 0; l < largo; l++) {
        printf("%i ", arr[l]);
    }
    printf("\n");
    printf("El size despues es: %i\n", largo);
}

int size (int array[])
{
    int count = 0;
    
    for (int i = 0; array[i] != '\0'; i++) {
        count++;
    }
    return count;
}
