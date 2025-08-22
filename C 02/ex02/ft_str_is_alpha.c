/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:28:21 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/28 09:42:11 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
// int main()
// {
//     char *str = "abCdEfhIJklm";
//     printf("%d\n", ft_str_is_alpha(str));
//     char *a = "876821";
//     printf("%d\n", ft_str_is_alpha(a));
//     char *b = "gh87fch645AD";
//     printf("%d\n", ft_str_is_alpha(b));
// }
