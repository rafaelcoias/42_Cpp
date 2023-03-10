#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
	private:
		Contact	contacts[8];
		int		size;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
		void	exit(void);
};

#endif