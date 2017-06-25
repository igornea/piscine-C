/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 11:49:18 by slogos            #+#    #+#             */
/*   Updated: 2016/08/12 11:09:33 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
