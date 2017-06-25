/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:09:43 by slogos            #+#    #+#             */
/*   Updated: 2016/08/14 11:08:23 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	if (nb >= 0 && nb <= 12)
	{
		fact = 1;
		i = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	else
		return (0);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(13));
	return (0);
}
