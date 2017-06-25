/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:31:05 by slogos            #+#    #+#             */
/*   Updated: 2016/09/01 14:40:23 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char str1[] = "Tuesday";
	char str2[] = "Tuesday";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
