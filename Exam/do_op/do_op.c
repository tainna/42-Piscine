#include <stdio.h>
#include <stdlib.h>

void do_op(int n1, char c, int n2)
{
    // int n1 = atoi(str);
    // int n2 = atoi(ptr);
    
    
    if(c == '*')
        printf("%d", (n1 * n2));
    else if(c == '/')
        printf("%d", (n1 / n2));
    else if(c == '+')
        printf("%d", (n1 + n2));
    else if(c == '-')
        printf("%d", (n1 - n2));
    else if(c == '%')
        printf("%d", (n1 % n2));
    else
        printf("0");
   
}
int main(int ac, char **av)
{
    if(ac == 4)
    {
        do_op(atoi(av[1]),av[2][0],atoi(av[3]));
    }
    printf("\n");
    return(0);
    
}