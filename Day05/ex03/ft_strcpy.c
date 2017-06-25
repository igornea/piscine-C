/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 20:08:45 by slogos            #+#    #+#             */
/*   Updated: 2016/09/01 15:58:41 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

char	*ft_strcpy(char *dest, char *src)

{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char str1[] = "afdsaf dfads aa";
	char str2[] = "bbbbbbbbbbbbbbbbbbbbbbbbbbbb";
	unsigned int n;

	ft_strcpy(str2, str1);
	ft_putstr(str2);
	n = 3;
	ft_putchar('\n');
	printf("%s\n", strncpy(str1, str2, 3));
	return (0);
}
