#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->size = 0;
}

PhoneBook::~PhoneBook() {}

Contact PhoneBook::getContact(int i) {
    if (i < 0 || i > 8)
    {
        return (0);
    }
    return (this->contacts[i]);
}

void    PhoneBook::addContact(void) {

}

void    PhoneBook::searchFor(void) {

}

void    PhoneBook::exit(void) {
    system("clear");
    std::exit(0);
}
