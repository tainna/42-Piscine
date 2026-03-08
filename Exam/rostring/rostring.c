#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    int start;
    int end;
    int flag = 0;

    while(str[i])
    {
        while((str[i] >= 9 && str[i] <= 14 )|| str[i] == 32)
            i++;
        start = i;
        while(str[i] >= 33 && str[i] <= 127)
            i++;
        end = i;
        while((str[i] >= 9 && str[i] <= 14 )|| str[i] == 32)
            i++;
        if(str[i])
        {
        while(str[i])
        {
        while((str[i] >= 9 && str[i] <= 14 )|| str[i] == 32)
            i++;
        while(str[i] >=  33 && str[i] <= 127)
            write(1, &str[i++],1);
        while(str[i] == 32)
            i++; 
        if(str[i - 1] == 32)
            write(1, " ", 1);
        }
        if(str[i - 1] != 32)
        flag++;
        }
        if(flag)
            write(1, " ", 1);
        while(start < end)
            write(1, &str[start++], 1);      
    }
}
int main(int ac, char **av)
{
    if(ac >= 2)
    {
        rostring(av[1]);
    }
    write(1, "\n", 1);
    return(0);
}