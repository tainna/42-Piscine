#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// void putnbr(int i)
// {
//     if(i > 9)
//         putnbr(i/10);
//     write(1, &"0123456789"[i%10], 1);
// }
// int isprime(int nb)
// {
//     int i = 2;
//     if(nb == 0)
//         return(0);

//     while(nb >= i * i)
//     {
//         if(nb / i == 0)
//             return(0);
//         i++;
//     }
//     return(1);
// }

void fprime(int n)
{
    int i = 2;

    while(i <= n)
    {
    if(n % i == 0)
    {
        printf("%d", i);
        if(n != i)
            printf("*");
        n = n / i;
    }
    else
    i++;
    }
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        fprime(atoi(av[1]));
    }
    
    printf("\n");
    return(0);
}