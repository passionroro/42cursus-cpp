#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << ft_toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
