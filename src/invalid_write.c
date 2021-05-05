/*
** EPITECH PROJECT, 2021
** invalid_write.c
** File description:
** functions related to valgrind write errors
*/

#include "my.h"

void invalid_write_size_1(void)
{
    /* Memory allocation */
    int i = 0;
    char *str = malloc(sizeof(char) * 10);

    /* Trying to access a character out of bounds */
    for (i = 0; i < 15; i++) {
        str[i] = i + 48;
    }
    str[i] = '\0';

    /* Free allocated memory */
    free(str);
}

void invalid_write_size_4(void)
{
    /* Memory allocation */
    int *array = malloc(sizeof(int) * 4);

    /* Free allocated memory */
    free(array);

    /* Trying to access a non-allocated integer */
    array[0] = 10;
}

void invalid_write_size_8(void)
{
    /* Memory allocation */
    char **array = malloc(sizeof(char*) * 10);

    for (int y = 0; y < 15; y++) {
        array[y] = malloc(sizeof(char*) * 10);
    }
    array[9] = NULL;

    /* Free allocated memory */
    for (int y = 0; array[y] != NULL; y++)
        free(array[y]);
    free(array);
}