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

char	*ft_strncat(char *dest, char *src,unsigned int n);

int	main(void)
{
	char			test1[] = "ola";
	char			test2[] = "hello";
	int				i;

	i = 7;
//	printf("%s\n", ft_strncat(test1, test2, 0));
//	printf("%s", strncat(test1, test2, 0));
	return (0);
}*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i] != '\0')
		i++;
	while (src[f] != '\0' && f < nb)
	{
		dest[i] = src[f]; 
		f++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
