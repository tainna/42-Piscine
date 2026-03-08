#include <unistd.h>

void rotone(char *str)
{
	while(*str)
	{
		if((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			*str = *str + 1;
		else if(*str == 'Z' || *str == 'z')
			*str = *str - 25;
		write(1, &*str, 1);
		str++;
	}
}

int main(int ag, char **av)
{
	if(ag == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
