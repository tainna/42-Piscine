// int	    is_power_of_2(unsigned int n)
// {
//     int i = 2;

//     if(n == 1)
//         return(1);
//     else if(n < 0)
//         return(0);
//     while(n >= i)
//     {
//         if(i == n)
//             return(1);
//         i = i * 2;
//     }
//     return(0);
// }
int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    else if((n & (n - 1)) == 0)
        return(1);
    return(0);
}
// #include <stdio.h>

// int main()
// {
//     printf("2 eh power %d\n", is_power_of_2(0));
//     printf("5 eh power %d\n", is_power_of_2(-5));
//     printf("24 eh power %d\n", is_power_of_2(24));
// }