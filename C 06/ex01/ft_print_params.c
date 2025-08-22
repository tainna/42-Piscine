/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:06:44 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/30 18:00:08 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char* str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	main(int argc, char* argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while(argc && i <= (argc - 1))
	{
		i++;
	}
	while(argc && argv[i][j] && i < (argv[i]))
	{
		write(1, &argv[i][j], 1);
		j++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
