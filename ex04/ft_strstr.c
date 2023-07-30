/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:20:05 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/30 14:54:44 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char test[] = "ABCDBAE";
	char test2[] = "BC";
	
	printf("%s", ft_strstr(test, test2));
	return (0);
}*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == to_find[i])
		{
			while (*str == to_find[i])
			{
				if (to_find[i + 1] == '\0')
				{
					str--;
					return (str);
				}
				i++;
			}
		}
		str++;
	}
	return (0);
}
