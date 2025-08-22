/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:36:17 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/31 11:00:20 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int	main(int argc, char* argv[])
{
	(void)argc;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1 ,"\n", 1);
	return(0);
}
