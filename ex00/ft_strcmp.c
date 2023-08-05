/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:50:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/27 18:49:54 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char test[] = "";
	char test1[] = "abcd";
	
	printf("%d\n\n", strcmp(test, test1));
	printf("%d", ft_strcmp(test,test1));
	
	return (0);
}*/
int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] == s2[cont] && s1[cont] != '\0' && s2[cont] != '\0')
		cont++;
	return (s1[cont] - s2[cont]);
}
