#include "../include/Sample.class.hpp"

Sample::Sample(int value) : _d(value)
{
	return ;
}

Sample::~Sample()
{
	return ;
}

int	Sample::getValue() const
{
	return (this->_d);
}

int	Sample::compare(Sample *other) const
{
	if (this->_d > other->getValue())
		return (1);
	else if (this->_d < getValue())
		return (-1);
	return (0);
}
