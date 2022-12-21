#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostrem>

typedef std::string	str;

class Contact {
	private:
        str	firstName;
		str	lastName;
		str	nick;
		str	number;
		str	secret;
		str	searchFor(str name);

	public:
		Contact();
		~Contact();
		void	setFirstName(str firstName);
        void	setLastName(str	lastName);
        void	setNick(str	nick);
        void	setNumber(str number);
        void	setSecret(str secret);
};

#endif