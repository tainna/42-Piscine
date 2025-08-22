/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 22:10:18 by taalmeid          #+#    #+#             */
/*   Updated: 2025/08/04 00:17:17 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(1));
	printf("%d \n", ft_fibonacci(10));
	return (0);
}
*/
