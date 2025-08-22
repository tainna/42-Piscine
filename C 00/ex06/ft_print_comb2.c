/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:33:24 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/23 15:11:25 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	while (a <= '9')
	{
		b = a + 0;
		while (b <= '9')
		{
			c = b + 0;
			while (c <= '9')
			{
				d = c + 1;
				while (d <= '9')
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					write(1, &d, 1);
					d++;
					if (a != '9')
						write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
// int main() 
// {
//   ft_print_comb2();
//   return (0);
// }
