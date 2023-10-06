#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[]) {
    string nombre = argv[1];
    /*if (argc != 2) {
    printf("no ingresaste nada pelele");
   } else { */
        for (int i = 0, n = strlen(nombre); i < n; i++) {
            if (nombre[i] >= 'a' && nombre[i] <= 'z') {
                printf("%c", nombre[i] - 32);
            } else {
               printf("%c", nombre[i]);
            }
        }
        printf("\n");
   //}
}