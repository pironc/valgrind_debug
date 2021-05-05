/*
** EPITECH PROJECT, 2021
** uninitialized.c
** File description:
** functions related to valgrind uninitialized variables
*/

#include "my.h"

void uninitialized(void)
{
    /* Memory allocation */
    char **array = malloc(sizeof(char*) * 10);

    /* Accessing newly allocated array */
    for (int y = 0; y < 9; y++) {
        array[y] = malloc(sizeof(char*) * 6);

        /* Using system function on non-initialized string */
        array[y] = strcat(array[y], "hello");
        array[y][5] = '\0';
    }
    array[9] = NULL;

    /* Array printing */
    for (int y = 0; array[y] != NULL; y++) {
        printf("%s\n", array[y]);
    }

    /* Free allocated memory */
    for (int y = 0; array[y] != NULL; y++)
        free(array[y]);
    free(array);
}