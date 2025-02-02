#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = argc - 1;
	while (i > 0)
	{
		if (argv[i])
		{
			len = ft_strlen(argv[i]);
			if (write(1, argv[i], len) != len)
				return (1);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
