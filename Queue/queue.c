#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}node;

int main (int argc, char *argv[]) {
    node *queue = NULL;

    for (int i = 1; i < argc; i++) {
        int n = atoi(argv[i]);

        node *tmp = malloc(sizeof(node));
        if (tmp == NULL) {
            printf("No se pudo alocar memoria\n");
            return 1;
        }
        tmp -> number = n;
        tmp -> next = queue;

        queue = tmp;
    }
    for (node *ptr = queue; ptr != NULL; ptr = ptr -> next) {
        printf("%i\n", ptr -> number);
    }
}
