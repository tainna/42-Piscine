#include <unistd.h>

char *rev_print(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    i--;
    while(str[i])
        write(1, &str[i--], 1);
    return(str);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        rev_print(av[1]);
    }
    write(1, "\n", 1);
}