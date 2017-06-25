void 	ft_putchar(char ptr);
void    ft_putnbr(int ptr);
void    ft_putaddr(char *ptr);

int		main(void)
{
	int 	a;
	int		c;
	char	*ptr;

	a = 3;
	c = 'b';
	ptr = &c;
	ft_putaddr(ptr);

	return (0);
}
