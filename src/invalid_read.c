/*
** EPITECH PROJECT, 2021
** invalid_write.c
** File description:
** functions related to valgrind write errors
*/

#include "my.h"

void invalid_read_size_1(void)
{
    /* Memory allocation */
    int i = 0;
    char *str = malloc(sizeof(char) * (8 + 1));

    for (i = 0; i < 8; i++) {
        str[i] = i + 48;
    }
    str[i] = '\0';

    /* Trying to access a character out of bounds */
    printf("%s\n", str);
    printf("15th character of str is [%c]\n", str[15]);

    /* Free allocated memory */
    free(str);
}

void invalid_read_size_4(void)
{
    /* Memory allocation */
    int *array = malloc(sizeof(int) * 3);

    for (int i = 0; i < 3; i++) {
        array[i] = i;
    }

    /* Trying to access a character out of bounds */
    for (int y = 0; y < 8; y++) {
        printf("%d element of array is %d\n", y, array[y]);
    }

    /* Free allocated memory */
    free(array);
}

void invalid_read_size_8(void)
{
    /* Node allocation */
    node_s *head = malloc(sizeof(*head));
    node_s *current = head;

    /* Adding new nodes with values */
    head->data = 42;
    head->next = NULL;
    push(head, 84);
    push(head, 5555);
    push(head, 777);

    /* Loop through list, print and free nodes */
    for (int i = 0; current; i++) {
        printf("%d-%d\n", i, head->data);
        current = current->next;
        free(current);
    }
}

void invalid_read_size_8_alt(void)
{
    /* Memory allocation */
    int i = 0;
    char **array = malloc(sizeof(char*) * (10 + 1));
    char *last_line_ptr = NULL;

    for (int y = 0; y < 10; y++) {
        array[y] = malloc(sizeof(char) * (8 + 1));
        array[y][0] = y + '0';
        array[y][1] = '\0';
        array[y] = strcat(array[y], "-string\0");
    }
    array[10] = NULL;

    /* Set last_line_ptr to the last line of the array */
    last_line_ptr = array[11];

    /* Trying to access a character out of bounds */
    for (int y = 0; array[y] != NULL; y++) {
        printf("%s\n", array[y]);
    }

    /* Free allocated memory */
    for (int y = 0; y < 10; y++) {
        free(array[y]);
    }
    free(array);
}