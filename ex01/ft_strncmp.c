/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:38:27 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/30 11:19:15 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char test[] = "ABCDE";
	char test1[] = "ADBDE";
	int size = 3;
	printf("%d\n\n", strncmp(test, test1, size));
	printf("%d", ft_strncmp(test,test1, size));
	return (0);
}*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && s1[cont] == s2[cont])
		cont++;
	return (s1[cont] - s2[cont]);
}
