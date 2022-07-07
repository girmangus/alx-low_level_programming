#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	size_t con = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		con++;
		h = h->next;
	}

	return (con);
}
