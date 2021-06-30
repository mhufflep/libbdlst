#include "bidirectional_list.h"

void	bd_lstswap(t_blst *l1, t_blst *l2)
{
	void	*temp;

	temp = l1->data;
	l1->data = l2->data;
	l2->data = temp;
}
