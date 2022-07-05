#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
	public:
		Sample(int value);
		~Sample();
		int	getValue() const;
		int	compare(Sample *other) const;

	private:
		int	_d;
};

#endif
