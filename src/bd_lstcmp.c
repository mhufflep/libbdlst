#include "bidirectional_list.h"

int	bd_lstcmp(t_blst *a, t_blst *b, int (*comp)())
{
	if (a && !b)
		return (1);
	else if (!a && b)
		return (-1);
	else if (!a && !b)
		return (0);
	return (comp(a->data, b->data));
}
