/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:06:56 by slogos            #+#    #+#             */
/*   Updated: 2016/09/01 15:40:42 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i]
		== '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}

int		main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", atoi("42"));
	return (0);
}
