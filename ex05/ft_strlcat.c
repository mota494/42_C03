/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:37:48 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/30 17:07:59 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);

int main()
{
	char test1[] = "HUGU";
	char test2[] = "BOSS";
	int size = 4;
	printf("%d",ft_strlcat(test1, test2, size));
}*/
/*#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

int	main(void)
{
	char	test1[];
	char	test2[];
	int		size;
	int		i;

	test1[] = "HUGU";
	test2[] = "BOSS";
	size = 4;
	printf("%d",ft_strlcat(test1, test2, size));
}*/
int	ft_strlen(char *str)
{
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	strl[2];
	int	i;
	int	f;

	strl[0] = ft_strlen(dest);
	strl[1] = ft_strlen(src);
	i = 0;
	f = 0;
	while (src[f] != '\0' && f < size)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[f];
			f++;
		}
		i++;
	}
	dest[i] = '\0';
	return (strl[0] + strl[1]);
}
