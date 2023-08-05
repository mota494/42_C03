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
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char test[] = "ABCDBJKDSHAJHDSJKADBAE";
	char test2[] = "0";
	
	printf("%s\n", ft_strstr(test, test2));
	printf("%s", strstr(test, test2));
	return (0);
}*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while ((str[i + n] == to_find[n]) && str[i + n] != '\0')
		{
			if (to_find[n + 1] == '\0')
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}
