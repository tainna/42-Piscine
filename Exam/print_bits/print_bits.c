#include<unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char byte = 0;
    while(i > 0)
    {
        i--;
        byte = ((octet >> i) & 1 ) + '0';
        write(1, &byte, 1);
    }
}
// #include<stdio.h>
// int main()
// {
//     print_bits(2);
//     printf("\n");
//     print_bits(64);
// }