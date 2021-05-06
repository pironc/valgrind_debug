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

    while (1) {
        int q = rand() % 132;
        if (q == 23) {
            char *buffer = NULL;
            buffer[0] = "helloworld";
            printf("%d", buffer);
        }
    }
}