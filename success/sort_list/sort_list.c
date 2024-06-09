#include "list.h"
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *h;
    int     tmp;

    h = lst;
    while(lst->next)
    {
        if (!cmp(lst->data, lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = h;
            continue;
        }
        lst = lst->next;
    }
    return (h);
}

// int main()
// {
//     t_list *h1 = malloc(sizeof(t_list));
//     h1->data = 5;
//     h1->next = NULL;

//     t_list *h2 = malloc(sizeof(t_list));
//     h2->data = 5;
//     h2->next = NULL;

//     t_list *h3 = malloc(sizeof(t_list));
//     h3->data = 1;
//     h3->next = NULL;

//     t_list *h4 = malloc(sizeof(t_list));
//     h4->data = 99;
//     h4->next = NULL;

//     h1->next = h2;
//     h2->next = h3;
//     h3->next = h4;

//     t_list *tmp = h1;

//     printf("before sort :\n");
//     while(tmp)
//     {
//         printf("->>>>>%d\n", tmp->data);
//         tmp = tmp->next;
//     }
//     printf("%d\n\n", ascending(0, 99));
//     tmp = sort_list(h1, ascending);
//     printf("after sort :\n");
//     while(tmp)
//     {
//         printf("->>>>>%d\n", tmp->data);
//         tmp = tmp->next;
//     }

// }