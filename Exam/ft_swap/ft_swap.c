#include<stdio.h>
void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
// int main()
// {
//     int a = 6;
//     int b = 9;
//     ft_swap(&a,&b);
//     printf("%d\n",a);
//     printf("%d\n",b);
// }