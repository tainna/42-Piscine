/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:39:02 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 13:46:20 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
// int main(void)
//     {
//     char src[] = "Isso";
//     char dest[] = "Aquilo"; 
//     printf("dest before: %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("dest after: %s\n", dest);
//     }
