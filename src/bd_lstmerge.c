#include "bidirectional_list.h"

t_blst	*bd_lst_merge(t_blst **n1, t_blst **n2)
{
	if (n1 == NULL || *n1 == NULL)
		return (NULL);
	if (n2 == NULL)
		return (*n1);
	(*n1)->next = *n2;
	*n2 = NULL;
	return (*n1);
}
