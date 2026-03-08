#include<stdlib.h>
// typedef struct s_list t_list;

// struct s_list
// {
//         int     data;
//         t_list  *next;
// }
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    
    t_list *head;
    int tmp;

    head = lst;
    while(lst != NULL && lst->next != NULL)
    {
    
    if((*cmp)((lst->data),(lst->next->data)) == 0)
    {
        tmp = lst->data;
        lst->data = lst->next->data;
        lst->next->data = tmp;
        lst = head;
    }
    else
    lst = lst->next;
    }
    return(head);
}
// int asc(int a, int b)
// {
//     return(a <= b);
// }
// #include<stdio.h>
// // int main()
// {
//     t_list n1;
//     t_list n2;
//     t_list n3;
//     t_list n4;

//     int a = 4;
//     int b = 3;
//     int c = 2;
//     int d = 5;

//     n1.data = &a;
//     n2.data = &b;
//     n3.data = &c;
//     n4.data = &d;
    
//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = &n4;
//     n4.next = NULL;

//     t_list *lst = sort_list(&n1, asc);

//     while(lst)
//     {
//         printf("%d", *(lst->data));
//         lst = lst->next;
//     }

// }