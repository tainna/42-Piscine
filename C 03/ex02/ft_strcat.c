/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:01:16 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/29 12:37:53 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
int main()
{
	char src[] = "abacate";
	char dest[20];
	printf("%s\n", ft_strcat(src,dest));
	char src0[] = "escola";
	char dest0[10];
	printf("%s\n", ft_strcat(src0,dest0));
}*/
