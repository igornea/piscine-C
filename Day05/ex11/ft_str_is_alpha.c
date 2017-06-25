/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 23:12:52 by slogos            #+#    #+#             */
/*   Updated: 2016/08/16 23:29:03 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		if (!((str[0] >= 65 && str[i] <= 90) ||
				(str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str[] = "Good morning everybody";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
