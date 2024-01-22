#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp, *prev, *next;

    if (!list || !*list || !(*list)->next)
        return;

    tmp = (*list)->next;

    while (tmp)
    {
        prev = tmp->prev;
        next = tmp->next;

        while (prev && tmp->n < prev->n)
        {
            if (prev->prev)
                prev->prev->next = tmp;
            else
                *list = tmp;

            tmp->prev = prev->prev;
            prev->prev = tmp;
            prev->next = next;

            if (next)
                next->prev = prev;

            tmp->next = prev;
            prev = tmp->prev;

            print_list((const listint_t *)*list);
        }

        tmp = tmp->next;
    }
}

