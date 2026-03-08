#include <unistd.h>

char* alpha_mirror(char *str)
{
	while(*str)
	{
	if(*str >= 'a' && *str <= 'y')
		*str = -*str + 'a' + 'z';
	else if(*str >= 'A' && *str <= 'Y')
		*str = -*str + 'A' + 'Z';
	else if(*str == 'z' || *str == 'Z')
		*str = *str - 25;
	write(1, &*str, 1);
	str++;
	}
return(str);
}
int main(int ag, char **av)
{
	if(ag == 2)
	{
		alpha_mirror(av[1]);
	}
	write(1, "\n", 1);
}
