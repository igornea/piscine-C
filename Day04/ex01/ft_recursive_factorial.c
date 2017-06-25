/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:39:58 by slogos            #+#    #+#             */
/*   Updated: 2016/08/14 11:13:43 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

int		main(void)
{
	printf("%d", ft_recursive_factorial(12));
	return (0);
}
