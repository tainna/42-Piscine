/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:31:09 by bramalho          #+#    #+#             */
/*   Updated: 2025/07/19 14:31:13 by bramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printline(int x, int lt)
{
	int	num;

	num = 0;
	while (num < x)
	{
		if ((lt == 'f' && num == 0) || (lt == 'f' && num == x - 1))
			ft_putchar('A');
		else if ((lt == 'l' && num == 0) || (lt == 'l' && num == x - 1))
			ft_putchar('C');
		else if ((lt == 'f') || (lt == 'l')
			|| (lt == 'm' && (num == 0 || num == x - 1)))
			ft_putchar('B');
		else
			ft_putchar(' ');
		num++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	value;

	value = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (value < y)
	{
		if (value == 0)
			printline(x, 'f');
		else if (value == y - 1)
			printline(x, 'l');
		else
			printline(x, 'm');
		value++;
	}
}
