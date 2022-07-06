#include "../include/Sample.class.hpp"

int	main()
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p;
	//void	(Sample::*f)() const;

	p = &Sample::foo;
	std::cout << instance.foo << std::endl;
	instance.*p += 1;
	std::cout << instance.foo << std::endl;
	instancep->*p += 1;
	std::cout << instance.foo << std::endl;
	return (0);
}
