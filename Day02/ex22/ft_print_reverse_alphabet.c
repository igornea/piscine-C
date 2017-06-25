/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 11:49:18 by slogos            #+#    #+#             */
/*   Updated: 2016/08/11 20:32:02 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
