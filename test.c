#include <stdio.h>
#include <cs50.h>

int main(void) {
    int arr[] = {5, 100, 1000, 25, 27, 6, 8};

    int n = get_int("Numero: ");

    for (int i = 0; i < 7; i++) {
        if (arr[i] == n) {
            printf("Found %i\n", n);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}