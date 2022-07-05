#include "../include/Sample.class.hpp"

int	main()
{
	int		ret;
	Sample	instance1(42);
	Sample	instance2(42);

	if (&instance1 == &instance1)
		std::cout << "Adress equal" << std::endl;
	if (&instance1 != &instance2)
		std::cout << "Adress not equal" << std::endl;
	ret = instance1.compare(&instance1);
	if (ret == 0)
		std::cout << "Data equal" << std::endl;
	ret = instance1.compare(&instance2);
	if (ret == 0)
		std::cout << "Data equal" << std::endl;
	return (0);
}
