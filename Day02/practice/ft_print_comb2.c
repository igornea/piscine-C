#include <unistd.h>

int ft_putchar(char c)
{
	write (1 ,&c, 1);
	return (0);
}

void	ft_print_comb2(void);
{
	int a;
	int b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			ft_putchar(' ');
			ft_putchar((b / 10) + 48);
			ft_putchar((a % 10) + 48);

			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
	
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
