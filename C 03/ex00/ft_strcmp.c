/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:52:02 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/29 10:23:48 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main(void)
{
    char S1[] = "abacate";
    char S2[] = "zebra";
    printf("%d\n", ft_strcmp(S1,S2));
    char S3[] = "banana";
    char S4[] = "abacaxi";
    printf("%d\n", ft_strcmp(S3,S4));
    char S5[] = "morango";
    char S6[] = "morango";
    printf("%d\n", ft_strcmp(S5,S6));
}*/
