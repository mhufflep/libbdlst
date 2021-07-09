#include "bidirectional_list.h"

t_blst	*bd_lstmin(t_blst *lst, int (*comp)())
{
	t_blst	*min;

	min = lst;
	while (lst)
	{
		if (bd_lstcmp(min, lst, comp) > 0)
			min = lst;
		lst = lst->next;
	}
	return (min);
}
