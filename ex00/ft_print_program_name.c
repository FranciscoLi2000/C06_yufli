#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	(void)argc;
	str = argv[0];
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
