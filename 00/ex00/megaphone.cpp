#include <iostream>
#include <cctype>

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
			std::cout << toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
