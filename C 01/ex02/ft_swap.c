/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:31:11 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/24 11:44:21 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main()
// {
//     float num1 = 50, num2 = 101;
//     printf("Num1: %.2f\tNum2: %.2f\n", num1, num2);
//     ft_swap(&num1, &num2);
//     printf("Num1: %.2f\tNum2: %.2f\n", num1, num2);
//     return 0;
// }
