#include <unistd.h>

void str_cap(char *str)
{
    int i = 0;
    
    
    while(str[i])
    {
    if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == 32 || str[i -1] == '\t' || str[i - 1] == '\0'))
        str[i] = str[i] - 32;
    if((str[i] >= 'A' && str[i] <= 'Z') && !(str[i - 1] == 32 || str[i -1] == '\t' || str[i - 1] == '\0'))
        str[i] = str[i] + 32;
    write(1, &str[i], 1);
    i++;
    }

}

int main(int ac, char **av)
{
    int i = 1;
    if(ac >= 2)
    {
        while(i < ac)
        {
        str_cap(av[i++]);
        write(1,"\n", 1);
        }
    }
    else
    write(1,"\n", 1);
    return(0);
}

// int main(int ac, char **av)
// {
//     int i = 1;
//     if(ac >= 2)
//     {
//         while(i <= ac)
//         {
//         str_cap(av[i]);
//         write(1, "\n", 1);
//         i++;
//         }
//     }
//     else
//     write(1,"\n", 1);
//     return(0);
// }