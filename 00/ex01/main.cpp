#include <iostream>
#include <string>

int	main()
{
	std::string	str("");

	while (str.compare("EXIT\0"))
	{
		std::cout << "Enter input : ";
		std::cin >> str;
		if (!str.compare("ADD\0"))
			std::cout << "adding contact to list" << std::endl;
		else if (!str.compare("SEARCH\0"))
			std::cout << "searching for contact in list" << std::endl;
		else if (str.compare("EXIT\0"))
			std::cout << "please enter SEARDCH, ADD or EXIT." << std::endl;
	}
	return (8);
}
