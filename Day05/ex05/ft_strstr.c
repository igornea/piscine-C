/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:16:43 by slogos            #+#    #+#             */
/*   Updated: 2016/09/23 13:11:32 by slogos           ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
			j++;
		if (to_find == '\0')
			return (&str[i]);
		else
			i++;
	}
	return (0); 
}

int		main(void)
{
	char str1[] = "Every orning is a new day";
	char str2[] = "ng is";

	printf("%s\n", ft_strstr(str1, str2));
//	printf("%s\n", strstr(str1, str2));
	return (0);
}
