/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:42:25 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:55:08 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
// int main(void)
// {
//     char str0[] = "ABDEGS";
//     char str1[] = "abAcdBeG";
//     char str2[] = "197822498732a";
//     printf("%s\n", ft_strlowcase(str0));
//     printf("%s\n", ft_strlowcase(str1));
//     printf("%s\n", ft_strlowcase(str2));
// }
