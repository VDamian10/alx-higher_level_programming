#include "lists.h"

/**
 * check_cycle - implements Floyd's cycle finding algo
 * @list: linked list being checked
 * Return: 1 if cycle and 0 otherwise
*/

int check_cycle(listint_t *list)
{
	listint_t *stars, *sun;

	if (!list)
		return (0);

	stars = list;
	sun = list;

	while (stars && stars->next != NULL)
	{
		stars = stars->next->next;
		sun = sun->next;

		if (stars == sun)
			return (1);
	}
	return (0);
}
