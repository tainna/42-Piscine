/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 22:01:13 by taalmeid          #+#    #+#             */
/*   Updated: 2025/08/03 22:01:49 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	char *teste1 = " ---+--+1234ab567";
	char *teste2 = " \t\n +42";
	char *teste3 = "--+--+-999";
	char *teste4 = "000123";
	char *teste5 = "  -0000456extra";

	printf("1: %d\n", ft_atoi(teste1));
	printf("2: %d\n", ft_atoi(teste2));
	printf("3: %d\n", ft_atoi(teste3));
	printf("4: %d\n", ft_atoi(teste4));
	printf("5: %d\n", ft_atoi(teste5));

	return (0);
}
*/
