/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:42:13 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:54:07 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
// int main() 
// {
//     char a[] = "abgfyt";
//     printf("%s\n", ft_strupcase(a));
//     char b[] = "AdnkjGdslkgn";
//     printf("%s\n", ft_strupcase(b));
//     char c[] = "1233435";
//     printf("%s\n", ft_strupcase(c));   
// }
