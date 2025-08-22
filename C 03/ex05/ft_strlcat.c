/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:31:06 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/29 16:03:47 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlen0(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = strlen0(dest);
	j = 0;
	if (i >= size)
		return (size + strlen0(src));
	while (src[j] && size > i + 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (strlen0(dest) + strlen0(&src[j]));
}
/*
#include <stdio.h>
int main()
{
	char dest[] = "abacaxi";
	char src[] = "abacate";
	printf("%d\n", ft_strlcat(dest,src,10));
}
*/
