#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

/* COLORS */

# define BLUE	"\033[0;34m"
# define CYAN	"\033[0;36m"
# define RED	"\033[0;31m"
# define YELLOW	"\033[0;33m"
# define GREEN	"\033[1;32m"
# define RESET	"\033[0m"

typedef std::string	str;

class Contact {
	private:
        str	firstName;
		str	lastName;
		str	nick;
		str	number;
		str	secret;

	public:
		Contact();
		~Contact();
		void	setFirstName(str firstName);
        void	setLastName(str	lastName);
        void	setNick(str	nick);
        void	setNumber(str number);
        void	setSecret(str secret);
		str	getFirstName(void);
        str	getLastName(void);
        str	getNick(void);
        str	getNumber(void);
        str	getSecret(void);
};

#endif