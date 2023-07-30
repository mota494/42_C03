/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:18:20 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/30 10:17:29 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	test1[];
	char	test2[];

	test1[] = "ola";
	test2[] = "hello";
	printf("%s\n", ft_strcat(test1, test2));
}*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (src[f] != '\0')
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[f];
			f++;
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
