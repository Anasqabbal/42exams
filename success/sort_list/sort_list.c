#include "list.h"
// #include <stdlib.h>
// #include <stdio.h>

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *t;
    int tmp;

    t = lst;
    while(t->next)
    {
        if (!cmp(t->data, t->next->data))
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

// int main()
// {
//     t_list *h1 = malloc(sizeof(t_list));
//     h1->data = 89;
//     h1->next = NULL;

//     t_list *h2 = malloc(sizeof(t_list));
//     h2->data = 3;
//     h2->next = NULL;

//     t_list *h3 = malloc(sizeof(t_list));
//     h3->data = 9;
//     h3->next = NULL;

//     h1->next = h2;
//     h2->next = h3;

//     t_list *tm;

//     tm = h1;

//     while(tm)
//     {
//         printf("%d\n", tm->data);
//         tm = tm->next;
//     }

//     tm = sort_list(h1, ascending);

//     while(tm)
//     {
//         printf("%d\n", tm->data);
//         tm = tm->next;
//     }
// }
