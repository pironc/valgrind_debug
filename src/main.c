/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function
*/

#include "my.h"

void basics(void)
{
    /**
     *
     * type values in bytes
     *
     * char        : 1 byte
     * int/float   : 4 bytes
     * pointer     : 8 bytes
     *
     * (not always the same everywhere, always use "sizeof()")
     *
     */
}

int main(void)
{


    /* Invalid Write */
    invalid_write_size_1();
    // invalid_write_size_4();
    // invalid_write_size_8();


    /* Invalid Read */
    // invalid_read_size_1();
    // invalid_read_size_4();
    // invalid_read_size_8();


    /* Memory leaks */
    // memory_leaks();
    // invalid_free();


    /* Uninitialized */
    // uninitialized();


    return (0);
}