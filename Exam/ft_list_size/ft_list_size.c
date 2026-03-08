typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
#include<string.h>
int	ft_list_size(t_list *begin_list)
{
    int count;

    while(begin_list != NULL)
    {
        begin_list = begin_list->next;
        count++;
    }
    return(count);
}
// #include<stdio.h>
// int main()
// {
//     t_list a, b, c;
//     a.data = "A"; a.next = &b;
//     b.data = "B"; b.next = &c;
//     c.data = "C"; c.next = NULL;

//     printf("%d\n", ft_list_size(&a));
// }