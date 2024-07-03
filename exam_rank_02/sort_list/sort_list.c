#include <unistd.h>
#include "list.h"


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *t;

	t = lst;
	while(t)
	{
		if (t->next && !cmp(t->data, t->next->data))
		{
			tmp = t->data;
			t->data = t->next->data;
			t->next->data = tmp;
			t = lst;
			continue ;
		}
		t = t->next;
	}
	return (lst);
}