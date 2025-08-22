/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:41:29 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:51:40 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
// int main() 
// {
//     char *str = "eBagdRTDGS";
//     printf("%d\n", ft_str_is_lowercase(str));
//     char *a = "876821";
//     printf("%d\n", ft_str_is_lowercase(a));
//     char *b = "abcde";
//     printf("%d\n", ft_str_is_lowercase(b));   
// }
