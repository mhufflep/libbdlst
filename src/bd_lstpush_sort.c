#include "bidirectional_list.h"

void	bd_lstrelink(t_blst *n1, t_blst *n2, t_blst *new)
{
	new->next = n2;
	new->prev = n1;
	n1->next = new;
	if (n2 != NULL)
		n2->prev = new;
}

void	bd_lstpush_sort(t_blst **lst, t_blst *new, int (*comp)())
{
	t_blst	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		if (bd_lstcmp(tmp, new, comp) > 0)
		{
			bd_lstrelink(tmp, tmp->next, new);
			bd_lstswap(tmp, new);
			break ;
		}
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		bd_lstadd_back(lst, new);
		return ;
	}
}
