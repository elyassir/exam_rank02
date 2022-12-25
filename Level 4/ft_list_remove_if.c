#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    while ((*begin_list) != NULL)
    {
        tmp = (*begin_list);
        *begin_list = (*begin_list)->next;
        if (cmp(data_ref, (*begin_list)->data) == 0)
            free(tmp);
    }
}