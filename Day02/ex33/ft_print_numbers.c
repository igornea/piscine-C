/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:13:34 by slogos            #+#    #+#             */
/*   Updated: 2016/08/23 23:18:24 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
