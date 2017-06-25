/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probe1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:39:25 by slogos            #+#    #+#             */
/*   Updated: 2016/08/15 12:29:08 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;
	
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void replace(char *str)
{
	str[0] = 'y';
}

int main(void)
{
	char str1[] = "Hello";

	ft_putstr(str1);
	ft_putchar('\n');
	replace(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}
