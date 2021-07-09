#include "bidirectional_list.h"

t_blst	*bd_lstmax(t_blst *lst, int (*comp)())
{
	t_blst	*max;

	max = lst;
	while (lst)
	{
		if (bd_lstcmp(max, lst, comp) < 0)
			max = lst;
		lst = lst->next;
	}
	return (max);
}
