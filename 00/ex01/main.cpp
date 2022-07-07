/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:26:18 by rohoarau          #+#    #+#             */
/*   Updated: 2022/07/07 15:18:10 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	addContact(Phonebook *book)
{
	std::string	tmp;

	std::cout << "\tFirst Name : ";
	std::getline(std::cin, tmp);
	book->setFirstName(tmp);
	std::cout << "\tLast Name : ";
	std::getline(std::cin, tmp);
	book->setLastName(tmp);
	std::cout << "\tNickname : ";
	std::getline(std::cin, tmp);
	book->setNickname(tmp);
	std::cout << "\tPhone Number : ";
	std::getline(std::cin, tmp);
	book->setPhoneNumber(tmp);
	std::cout << "\tTell us your darkest secret : ";
	std::getline(std::cin, tmp);
	book->setDarkestSecret(tmp);
	std::cout << std::endl;
}

void	printBook(Phonebook *book)
{
	std::cout << book->getFirstName() << std::endl;
}

int	main(void)
{
	Phonebook	book;

	std::cout << "Welcome to your phonebook!\n\t* Type ADD to add a contact\n\t* Type SEARCH to search for a contact\n\t* To leave, type EXIT\n" << std::endl;
	while (book.input.compare("EXIT\0"))
	{
		std::cout << "Enter input : ";
		std::getline(std::cin, book.input);
		if (!book.input.compare("ADD\0"))
			addContact(&book);
		else if (!book.input.compare("SEARCH\0"))
			std::cout << "searching for contact in list" << std::endl;
		else if (book.input.compare("EXIT\0"))
			std::cout << "please enter SEARDCH, ADD or EXIT." << std::endl;
		//printBook(&book);
	}
	return (0);
}
