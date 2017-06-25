/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 23:03:04 by slogos            #+#    #+#             */
/*   Updated: 2016/08/11 16:11:38 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 		ft_putchar(char c)
{
		write(1, &c, 1);
		return (1);	
}

int 		ft_nputchar(char c, int n)
{
	int i;
	
	i=0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

int 		main()
{
		ft_nputchar('@',42);
		ft_putchar('\n');
		return(0);
}
