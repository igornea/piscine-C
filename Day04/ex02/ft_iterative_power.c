/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:18:57 by slogos            #+#    #+#             */
/*   Updated: 2016/08/14 11:17:43 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power > 0)
	{
		i = 1;
		result = 1;
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
	else
		return (0);
}

int		main(void)
{
	printf("%d", ft_iterative_power(-3, 3));
	return (0);
}
