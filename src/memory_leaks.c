/*
** EPITECH PROJECT, 2021
** memory_leaks.c
** File description:
** functions related to valgrind lost bytes
*/

#include "my.h"

void invalid_free(void)
{
    char *to_parse = "name:cyprien;surname:piron;age:20;activity:valgrind;\
usefulinyournextprojects:ihopeso;wouldyouuseit:youshouldandhavenochoice\0";

    char **parsed_array = my_str_to_word_array(to_parse);

    for (int y = 0; parsed_array[y] != NULL; y++) {
        printf("%d-%s\n", y, parsed_array[y]);
        free(parsed_array[y]);
        free(parsed_array);
    }
    free(parsed_array);
}

void memory_leaks(void)
{
    /* Memory allocation */
    char **array = malloc(sizeof(char*) * 10);

    for (int y = 0; y < 10; y++) {
        array[y] = malloc(sizeof(char*) * 10);
    }
    array[9] = NULL;

    /* Free allocated memory */
    for (int y = 0; array[y] != NULL; y++)
        free(array[y]);
    free(array);
}