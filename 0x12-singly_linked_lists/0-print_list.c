#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: element of the structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}