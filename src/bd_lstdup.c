#include "bidirectional_list.h"

static void *bd_memmove(void *dst, const void *src, size_t n)
{
    if (dst == NULL && src == NULL)
        return (0);
    while (n-- > 0)
        ((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
    return (dst);
}

t_blst *bd_lstdup(t_blst *lst, int datasize)
{
    t_blst  *new;
    void    *new_data;

    new_data = malloc(datasize);
    if (!new_data)
        return (NULL);
    if (lst->data)
        bd_memmove(new_data, lst->data, datasize);
    new = bd_lstnew(new_data);
    if (!new)
        free(new_data);
    return (new);
}
