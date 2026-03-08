
int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max;

    max = tab[0];
    if(!tab || !len)
        return(0);
    while(i < len)
    {
        if(max < tab[i])
            max = tab[i];
        i++; 
    }
    return(max);
}
// #include<stdio.h>

// int main()
// {
//     int tab[] = {3,10,1,4};
    
//     int c = max(tab, 4);
//     printf("%d", c);
// }