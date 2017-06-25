/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:39:18 by slogos            #+#    #+#             */
/*   Updated: 2016/08/17 01:09:12 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str[i] -= 32;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 'A'
		|| (str[i - 1] > 'Z'
		&& str[i - 1] < 'a') || str[i - 1] > 'z')
			if (str[i] >= 'a' && str[i] < 'z'
			&& (str[i - 1] < '0' || str[i - 1] > 9))
				str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "good morning, have a nice day";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
