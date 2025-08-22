/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:41:46 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:52:26 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
// int main() 
// {
//     char *a = "ABVRES";
//     printf("%d\n", ft_str_is_uppercase(a));
//     char *b = "876821";
//     printf("%d\n", ft_str_is_uppercase(b));
//     char *c = "abcde";
//     printf("%d\n", ft_str_is_uppercase(c));   
// }
