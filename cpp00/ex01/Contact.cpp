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

str    Contact::getFirstName(void) {
    return (this->firstName);
}

str    Contact::getLastName(void) {
    return (this->lastName);
}

str    Contact::getNick(void) {
    return (this->nick);
}

str    Contact::getNumber(void) {
    return (this->number);
}

str    Contact::getSecret(void) {
    return (this->secret);
}