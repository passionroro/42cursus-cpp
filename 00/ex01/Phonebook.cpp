/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:25:06 by rohoarau          #+#    #+#             */
/*   Updated: 2022/07/07 15:18:14 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : input(""), _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret("")
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}


std::string	Phonebook::getFirstName()
{
	return (this->_firstName);
}


void	Phonebook::setFirstName(std::string name)
{
	while (name.empty())
	{
		std::cout << "\tPlease enter a first name\n\tFirst Name : ";
		std::getline(std::cin, name);
	}
	this->_firstName = name;
	return ;
}

void	Phonebook::setLastName(std::string name)
{
	while (name.empty())
	{
		std::cout << "\tPlease enter a last name\n\tLast Name : ";
		std::getline(std::cin, name);
	}
	this->_lastName = name;
	return ;
}

void	Phonebook::setNickname(std::string name)
{
	while (name.empty())
	{
		std::cout << "\tPlease enter a nickname\n\tNickname : ";
		std::getline(std::cin, name);
	}
	this->_nickname = name;
	return ;
}

void	Phonebook::setPhoneNumber(std::string number)
{
	while (number.empty())
	{
		std::cout << "\tPlease enter a valid phone number\n\tPhone number : ";
		std::getline(std::cin, number);
	}
	this->_phoneNumber = number;
	return ;
}

void	Phonebook::setDarkestSecret(std::string secret)
{
	while (secret.empty())
	{
		std::cout << "\tPlease enter a secret\n\tTell us your darkest secret : ";
		std::getline(std::cin, secret);
	}
	this->_darkestSecret = secret;
	return ;
}
