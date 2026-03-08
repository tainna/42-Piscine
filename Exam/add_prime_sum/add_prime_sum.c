#include <unistd.h>

int ft_atoi(char* n)
{
        int sgn = 1;
        int result = 0;
        while(*n >= 9 && *n <= 14)
                *n++;
        if(*n == '+' || *n == '-')
        {
                if(*n == '-')
                {
                        *n = -*n;
                        sgn = -1;
                }
        *n++;
        }
        while(*n >= '0' && *n <= '9')
        {
                result = result * 10 + (*n - '0');
                *n++;
        }
        return(result * sgn);
}
void putnbr(int nb)
{
    if(nb > 9)
        putnbr(nb /10);
    write(1, &"0123456789"[nb%10], 1);
}
int is_prime(int n)
{
    if(n == 0)
        return(0);
    int i = 2;
    while(i * i <= n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int add_prime_sum(int str)
{
    int r = 0;
    int x;

    x = str;
    while(x > 1)
    {
        if(is_prime(x))
            r = r + x;
        x--;       
    }
    return(r);
}
int main(int ag, char **av)
{
    if(ag == 2)
    {
        int n;
        int r;

        n = ft_atoi(av[1]);
        r = add_prime_sum(n);
        putnbr(r);
        write(1, "\n", 1);
    }
    else
    write(1, "0\n", 2);
    return(0);
}