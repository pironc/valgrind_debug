/*
** EPITECH PROJECT, 2021
** gdb.c
** File description:
** program to debug with gdb
*/

#include "my.h"

int gdb(void)
{
    int a = 4231;
    srand(time(NULL));
    char *buffer = NULL;

    while (1) {
        int q = rand() % 132;
        if (q == 23) {
            buffer = NULL;
            buffer[0] = "helloworld";
            printf("%d", buffer);
        }
        printf("!!%d!!", a);
    }
    for (int y = 0; buffer[y] != '\0'; y++) {
        free(buffer[y]);
    }
    free(buffer);
}