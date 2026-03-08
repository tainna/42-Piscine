#include <unistd.h>

void first_word(char *str)
{
    while(*str)
    {
        while(*str == 32 || *str == '\t' || *str == '\n')
            *str++;
        //if(*str != '\0')
        while(*str >= 33 && *str <= 127)
            write(1, &*str++, 1);
        while(*str)
            *str++;
    }
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        first_word(av[1]);
    }
    write(1, "\n", 1);
}
