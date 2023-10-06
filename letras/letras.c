#include <stdio.h>

int main(void) 
{
    char *string = "Empanada";
    char letra = 'a';
    int c = 0;

    printf("la direccion de memoria de la string es: %p\n", string);
    printf("la direccion de memoria de E es: %p\n", &string[0]);

}
