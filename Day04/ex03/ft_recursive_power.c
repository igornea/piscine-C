/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 20:44:26 by slogos            #+#    #+#             */
/*   Updated: 2016/08/14 11:19:49 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power -1);
	return (nb);
}

int main (void)
{
	printf("%d", ft_recursive_power(3, 3));
	return (0);
}
