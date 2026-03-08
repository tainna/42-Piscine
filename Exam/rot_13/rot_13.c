#include <unistd.h>

char *rot_13(char *str)
{
	while(*str)
	{	
		if((*str >= 'a' && *str <= 'm') ||(*str >= 'A' && *str <= 'M'))
			*str = *str + 13;
		else if((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			*str =*str - 13;
		write(1, &*str,1);
		*str++;
	}
return(str);
}
int main(int ag, char **av)
{
	if(ag == 2)
	{
		rot_13(av[1]);
	}
write(1, "\n", 1);
}
