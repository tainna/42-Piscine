#include<unistd.h>
int main(int ag, char **av)
{
	if(ag == 2)
	{
		int i = 0;
		int j = 0;
		while(av[1][i])
		{
		char c = av[1][i];
		if(c >= 'a' && c<= 'z')
			j = -'a'+ c + 1;
		else if(c >= 'A' && c<= 'Z')
			j = c + 1 - 'A';
		else
			write(1, &c, 1);	
		while(j > 0)
		{
			write(1, &c, 1);
			j--;
		}
		i++;
		}
	}
write(1, "\n", 1);
}
