/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:26:39 by slogos            #+#    #+#             */
/*   Updated: 2016/08/13 23:39:56 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (0);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (-1);
}

int		main(void)
{
	printf("%d", ft_fibonacci(0));
	return (0);
}
