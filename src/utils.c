/*
** EPITECH PROJECT, 2021
** push
** File description:
** function used to push a node with a data
*/

#include "my.h"

void push(node_s *head, int data)
{
    node_s *tmp = head;
    node_s *newnode = malloc(sizeof(*newnode));

    while (tmp->next)
        tmp = tmp->next;

    newnode->data = data;
    newnode->next = NULL;
    tmp->next = newnode;
}