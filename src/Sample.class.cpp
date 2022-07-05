#include "../include/Sample.class.hpp"

Sample1::Sample1(int p1, char p2, float p3)
{
	std::cout << "Constructor1" << std::endl;
	this->a1 = p1;
	this->a2 = p2;
	this->a3 = p3;
	return ;
}

Sample1::~Sample1()
{
	std::cout << "Destructor1" << std::endl;
	return ;
}

Sample2::Sample2(int p1, char p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor2" << std::endl;
	return ;
}

Sample2::~Sample2()
{
	std::cout << "Destructor2" << std::endl;
	return ;
}
