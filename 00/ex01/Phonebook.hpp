#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cctype>

class Phonebook
{
	public:

		std::string	input;

		Phonebook();
		~Phonebook();
		
		void	setFirstName(std::string name);
		void	setLastName(std::string name);
		void	setNickname(std::string name);
		void	setPhoneNumber(std::string number);
		void	setDarkestSecret(std::string secret);

		std::string	getFirstName();
	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;	
};

#endif
