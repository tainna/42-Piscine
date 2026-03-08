#include<string.h>
#include<stdlib.h>

static int count_word(char* str)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {    
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if(str[i] != '\0')
    count++;
    while(str[i] >= 33 && str[i] <= 127)
    i++;
    }
return(count);
}

char    **ft_split(char *str)
{
    char **ptr;
    int i = 0;
    int j = 0;
    int k = 0;
    int start;
    int end;
    int len;
    int words = count_word(str);

    ptr = malloc(sizeof(char*) * (words + 1));
    if(!ptr)
        return(NULL);

    while(str[i])
    {
        j = 0;
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
        start = i;
        while(str[i] >= 33 && str[i] <= 127)
            i++;
        end = i;
        len = end - start;
        if(!len)
            break;
        ptr[k] = malloc(sizeof(char) * (len + 1));
        while(end > start)
        {
            ptr[k][j++] = str[start++];
        }
        ptr[k][j] = '\0';
        k++;
    }
    ptr[k] = NULL;
    return(ptr);
}
// #include<stdio.h>
// int main()
// {
//     char **p;
//     char *s = "acende o farol camiseta molhadinha da novinha igual lencol";
//     p = ft_split(s);
//     int i = 0;
//     int j = 0;

//     while(p[j])
    
//         printf("%s\n",p[j++]);
   
    
// }
