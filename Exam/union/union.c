#include <unistd.h>
void ft_union(char *str, char* ptr)
{
    char ascii[256] = {0};
    int i = 0;
    int j = 0;

    while(str[i])
    {
        if(str[i] && ascii[str[i]] == 0)
        {
            write(1, &str[i], 1);
            ascii[str[i]] = str[i];
        }
        i++;
    }
    while(ptr[j])
    {
         if(ptr[j] && ascii[ptr[j]] == 0)
        {
            write(1, &ptr[j], 1);
            ascii[ptr[j]] = ptr[j];
        }
        j++;

    }

}
int main(int ac, char **av)
{
    if(ac == 3)
    {
        ft_union(av[1],av[2]);
    }
    write(1, "\n", 1);
    return(0);
}