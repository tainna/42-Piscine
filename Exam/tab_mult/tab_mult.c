#include <unistd.h>
int ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n/10);
	write(1, &"0123456789"[n%10], 1);
}

int ft_atoi(char* n)
{
//	int i = 0;
	int sgn = 1;
	int result = 0;
	while(*n >= 9 && *n <= 14)
		*n++;
	if(*n == '+' || *n == '-')
	{
		if(*n == '-')
		{
			*n = -*n;
			sgn = -1;
		}
	*n++;
	}
	while(*n >= '0' && *n <= '9')
	{
		result = result * 10 + (*n - '0'); 
		*n++;
	}
	return(result * sgn);
}

char tab_mult(int n)
{
	int i = 1;

	while(i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		tab_mult(ft_atoi(av[1]));
	}
else
write(1, "\n", 1);
}
