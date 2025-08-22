/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:24:25 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/30 00:44:11 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int main()
{
	char s0[] = "art";
	char s1[] = "art";
	printf("%d\n", ft_strncmp(s0,s1,10));
	char s2[] = "abobora";
	char s3[] = "adoraba";
	printf("%d\n", ft_strncmp(s2,s3,10));	
}*/
