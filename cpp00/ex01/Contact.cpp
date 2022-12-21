#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact(){}

void    Contact::setFirstName(str firstName) {
    this->firstName = firstName;
}

void    Contact::setLastName(str lastName) {
    this->lastName = lastName;
}

void    Contact::setNick(str nick) {
    this->nick = nick;
}

void    Contact::setNumber(str number) {
    this->number = number;
}

void    Contact::setSecret(str secret) {
    this->secret = secret;
}