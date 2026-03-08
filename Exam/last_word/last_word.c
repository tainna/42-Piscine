#include <unistd.h>

void last_word(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	--i;
	while((str[i] >= 9 && str[i] <= 14) || str[i] == 32)
			i--;
	int end = i;
	while(str[i] >= 33 && str[i] <= 126)
			i--;
	int start = i + 1;
	while(end >= start)
			write(1, &str[start++], 1);	
}
int main(int ag, char **av)
{
	if(ag == 2)
	{
		last_word(av[1]);
	}
write(1, "\n", 1);
}

