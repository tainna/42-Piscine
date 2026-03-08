#include<unistd.h>

void ft_ulstr(char *str)
{
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        else if(*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        write(1, &*str, 1);
        *str++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_ulstr(av[1]);
    }
    write(1, "\n", 1);
}