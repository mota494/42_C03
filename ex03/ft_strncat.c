/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:29:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/30 10:20:36 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int n);

int	main(void)
{
	char test1[] = "ola";
	char test2[] = "hello";
	int i = 0;
	printf("%s\n", ft_strncat(test1, test2, 9));
	return (0);
}*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (src[f] != '\0' && f < nb)
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
