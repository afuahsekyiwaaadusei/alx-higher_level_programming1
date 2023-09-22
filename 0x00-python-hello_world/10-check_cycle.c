#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *check_cycle -function that checks if a singly linked list has a cycle in it.
 *@list: singly linked list.
 *
 *Return: 0 if there is no cycle, 1 if there is a cycle.
 */

int check_cycle(listint_t *list)
{
        listint_t *head = list;
        int i = 0;

        if (list == NULL)
                return (0);
        while (list != NULL)
        {
                if (i && head == list)
                        return (1);
                list = list->next;
                i++;
        }
        return (0);
}
