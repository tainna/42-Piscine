/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:38:53 by taalmeid          #+#    #+#             */
/*   Updated: 2025/08/04 01:01:34 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char* str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = ac - 1;
	while(i > 0)
	{
	j = 0;
		while(av[i][j])
		{
		write(1, &av[i][j], 1);
		j++;
		}
	 write(1, "\n", 1);
	--i;
	}
}
