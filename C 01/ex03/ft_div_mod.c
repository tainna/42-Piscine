/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:45:14 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/24 11:49:21 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
	// int main()
	// {
	// 	int a = 50, b= 4;
	// 	int div, mod;

	// printf("Antes: a = %d, b = %d\n", a, b);
	// ft_div_mod(a, b, &div, &mod);
	// printf("Divisão: %d\n", div);
	// printf("Resto: %d\n", mod);

	// return 0;
	// }
