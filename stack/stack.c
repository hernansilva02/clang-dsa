#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}node;

node* push (node *top, int n);
node* pop (node *top);

int main (int argc, char *argv[]) {
    int numero;
    int num;
    node *list = NULL;
    if (argc == 1) {
        printf("No se ingresaron valores\n");
        return 1;
    } 

    for (int i = 1; i < argc; i++) {

        numero = atoi(argv[i]);

        node *tmp = malloc(sizeof(node));

        if (tmp == NULL) {
            return 1;
        }

        tmp -> number = numero;
        tmp -> next = list;

        list = tmp;
    }

    list = pop(list);

    node *ptr = list;
    while (ptr != NULL) {
        node *next = ptr -> next;
        printf("%i", ptr -> number);
        free(ptr);
        ptr = next;
    }

    printf("\n");


}

node* push (node *top, int n) {
    node *temp = malloc(sizeof(node));
    temp -> number = n;
    temp -> next = top;
    top = temp;
    return top;
}

node* pop (node *top) {
    if (top == NULL) {
        printf("No hay elementos en la lista");
        return NULL;
    }
    node *prev = top -> next;
    free(top);
    return prev;
}
