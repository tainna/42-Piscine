/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:52:51 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/26 15:25:20 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	if (b != 0)
	{
		div = (*a / *b);
		resto = (*a % *b);
		*a = div;
		*b = resto;
	}
}
	// int main()
	// {
	// 	int a = 50, b= 5;
	// 	int div, mod;
	// 	printf("Antes: a=%d, b=%d\n", a, b); 
	// 	ft_ultimate_div_mod(&a,&b);
	// 	printf("Resultado: a=%d, b=%d\n", a, b);
	// }
