#include <unistd.h>

int		ft_putchar(char c);
int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	argc = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
