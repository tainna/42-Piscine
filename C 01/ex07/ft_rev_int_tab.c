/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:37:55 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/26 15:38:48 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
// int main()
// {
//     int tab[6] = {2, 3, 4, 5, 6, 7};
//     int size = 6;
//     int i = 0;

//     printf("Antes: ");
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");

//     ft_rev_int_tab(tab, size);    
//     i = 0;
//     printf("Depois: ");
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");

//     return 0;
// }
