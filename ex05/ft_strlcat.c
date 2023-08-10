/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:00 by mloureir          #+#    #+#             */
/*   Updated: 2023/08/02 14:20:01 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "Mota";
	char dest[] = "guel";
	int size = 6;
	char src1[] = "Mota";
	char dest1[] = "guel";
	int size1 = 6;
	printf("Retorno da minha: [%d]\n", ft_strlcat(dest,src,size));
	printf("Retorno strlcat: [%zu]\n", strlcat(dest1, src1, size1));
	printf("Dest da minha: %s\n", dest);
	printf("Dest strlcat: %s", dest1);
}*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	strl[2];
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	strl[0] = ft_strlen(dest);
	strl[1] = ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	while (src[f] != '\0' && i < size - 1 && size > 0)
	{
		dest[i] = src[f]; 
		f++;
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	if (size < strl[0])
		return (size + strl[1]);
	else
		return (strl[0] + strl[1]);
}
