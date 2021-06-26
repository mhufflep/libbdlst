#include "bidirectional_list.h"

void	bd_lstdelone(t_blst *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->data);
		free(lst);
	}
}

void	bd_lstclear(t_blst **lst, void (*del)(void *))
{
	if (lst && *lst && del)
	{
		if ((*lst)->next != NULL)
			bd_lstclear(&((*lst)->next), (*del));
		bd_lstdelone(*lst, (*del));
		*lst = NULL;
	}
}
