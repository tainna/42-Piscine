/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:42:00 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:53:11 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
// int main() 
// {
//     char *a = "ABVRES";
//     printf("%d\n", ft_str_is_printable(a));
//     char *b = "876821";
//     printf("%d\n", ft_str_is_printable(b));
//     char *c = "\0";
//     printf("%d\n", ft_str_is_printable(c));   
// }
