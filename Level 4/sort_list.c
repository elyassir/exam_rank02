#include <stdio.h>
//#include "list.h"

typedef struct s_list
{
	int     data;
	struct s_list  *next;
}   t_list;

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *node;
    t_list *save = lst;
    int tmp;
    while (lst->next)
    {
        node = lst->next;
        if (cmp(lst->data, node->data) == 0)
        {
            tmp = lst->data;
            lst->data = node->data;
            node->data = tmp;
            lst = save;
        }
        else 
            lst = lst->next;
    }
    return (save);
}