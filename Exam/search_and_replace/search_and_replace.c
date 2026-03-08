
#include<unistd.h>

char *search_and_replace(char* str, char c, char z)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			str[i] = z;
		write(1, &str[i], 1);
		i++;
	}
return(str);
}

int main(int ag, char** av)
{
	if(ag == 4 && !av[2][1] && !av[3][1])
	{
		search_and_replace(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
}
