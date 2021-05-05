/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** function to split a string into an array
*/

#include "my.h"

int is_alphanum(char const *str, int i)
{
    if (str[i] != ';')
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int word_nb = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if ((is_alphanum(str, i) == 1) && (is_alphanum(str, i + 1) == 0))
            word_nb++;
    return (word_nb);
}

char **alloc_array(char const *str, char **word_array, int word_nb)
{
    int cur_pos = 0;
    int word_length = 0;

    while (is_alphanum(str, cur_pos) == 0)
        cur_pos++;
    for (int i = 0; i < word_nb; i++) {
        while (is_alphanum(str, cur_pos) == 1) {
            word_length++;
            cur_pos++;
        }
        cur_pos++;
        word_array[i] = malloc(sizeof(char) * (word_length + 1));
        word_length = 0;
        while (is_alphanum(str, cur_pos) == 0) {
            cur_pos++;
        }
    }
    return (word_array);
}

char **store_words(char const *str, char **word_array, int word_nb)
{
    int x = 0;
    int cur_pos = 0;

    while (is_alphanum(str, cur_pos) == 0)
        cur_pos++;
    for (int i = 0; i < word_nb; i++) {
        while (is_alphanum(str, cur_pos) == 1) {
            word_array[i][x] = str[cur_pos];
            cur_pos++;
            x++;
        }
        word_array[i][x] = '\0';
        x = 0;
        cur_pos++;
        while (is_alphanum(str, cur_pos) == 0) {
            cur_pos++;
        }
    }
    return (word_array);
}

char **my_str_to_word_array(char const *str)
{
    int word_nb = 0;
    char **word_array = NULL;

    if (str == NULL)
        return (NULL);

    word_nb = count_words(str);

    word_array = malloc(sizeof(char *) * (word_nb + 1));

    word_array = alloc_array(str, word_array, word_nb);
    word_array = store_words(str, word_array, word_nb);

    word_array[word_nb] = NULL;
    return (word_array);
}