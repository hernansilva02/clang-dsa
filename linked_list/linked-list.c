#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);

        node *tmp = malloc(sizeof(node));

        if (tmp == NULL) {
            return 1;
        }

        tmp -> next = NULL;
        tmp -> number = number;
        tmp -> next = list;
        list = tmp;
    }

    node *ptr = list;

    while (ptr != NULL) {
        printf("%i\n", ptr -> number);
        ptr = ptr -> next;
    }
    ptr = list;
    while (ptr != NULL) {
        node *temp = ptr -> next;
        free(ptr);
        ptr = temp;
    }

}


