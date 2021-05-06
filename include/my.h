/*
** EPITECH PROJECT, 2020
** _MY_H_
** File description:
** _MY_H_
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

/* STRUCTS */

typedef struct node_t {
    int data;
    struct node_t *next;
}node_s;

/* LIB FUNCTIONS */

char **my_str_to_word_array(char const *str);

/* PROJECT FUNCTIONS */

/* Invalid Write */
void invalid_write_size_1(void);
void invalid_write_size_4(void);
void invalid_write_size_8(void);

/* Invalid Read */
void invalid_read_size_1(void);
void invalid_read_size_4(void);
void invalid_read_size_8(void);

/* Memory leaks */
void memory_leaks(void);
void invalid_free(void);

/* Uninitialized */
void uninitialized(void);

/* Utils */
void push(node_s *head, int data);

#endif /* !_MY_H_ */