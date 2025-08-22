/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taalmeid <taalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:41:16 by taalmeid          #+#    #+#             */
/*   Updated: 2025/07/27 14:49:21 by taalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// int main()
// {
//     char *str = "abCdEfhIJklm";
//     printf("%d\n", ft_str_is_numeric(str));
//     char *a = "876821";
//     printf("%d\n", ft_str_is_numeric(a));
//     char *b = "gh87fch645AD";
//     printf("%d\n", ft_str_is_numeric(b));
// }
