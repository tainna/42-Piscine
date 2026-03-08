

char    *ft_strcpy(char *s1, char *s2)
{
    char *dest = s1;

    while(*s2)
    {
        *s1++ = *s2++;
    }
    *s1 = '\0';
    return(dest);
}
// #include<stdio.h>
// int main()
// {
//     char s1[10];
//     char* s2 = "bucetinha";
//     ft_strcpy(s1, s2);
//     printf("%s\n", s1);
// }