/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:17:27 by slogos            #+#    #+#             */
/*   Updated: 2016/09/01 17:39:23 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (i < n)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char str1[] = "Good, lfalksdfj";
	char str2[] = "Gooddjffklsajdf";

	printf("%d\n", ft_strncmp(str1, str2, 2));
	printf("%d\n", strncmp(str1, str2, 2));
	return (0);
}
