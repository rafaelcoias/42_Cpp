#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    size = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::addContact(void) {
    str arg;

    system("clear");
    std::cout << "===== " << GREEN << "NEW CONTACT" << RESET << " =====" << std::endl;
    std::cout << std::endl;
    std::cout << "First Name : ";
    std::cin >> arg;
    contacts[size % 8].setFirstName(arg);
    std::cout << "Last Name : ";
    std::cin >> arg;
    contacts[size % 8].setLastName(arg);
    std::cout << "NickName : ";
    std::cin >> arg;
    contacts[size % 8].setNick(arg);
    std::cout << "Phone Number : ";
    std::cin >> arg;
    contacts[size % 8].setNumber(arg);
    std::cout << "Darkest Secret : ";
    std::cin >> arg;
    contacts[size % 8].setSecret(arg);
    std::cout << std::endl;
    size++;
    std::cout << GREEN << "[ New Contact Saved ]" << RESET << std::endl;
    sleep(1);
}

str    doColumn(str str){
    if (str.length() >= 10)
        return (str.substr(0, 9).append("."));
    while (str.length() < 10)
        str.insert(0, " ");
    return (str);
}

void    getContactInfo(Contact c) {
    str input;

    while (1) {
        system("clear");
        std::cout << YELLOW << "===== Contact Info =====" << RESET << std::endl << std::endl;
        std::cout << "First Name : " << c.getFirstName() << std::endl;
        std::cout << "Last Name : " << c.getLastName() << std::endl;
        std::cout << "Nick Name : " << c.getNick() << std::endl;
        std::cout << "Phone Number : " << c.getNumber() << std::endl;
        std::cout << "Darkest Secret : " << c.getSecret() << std::endl << std::endl;
        std::cout << "Write 'return' To Go Back" << std::endl;
        std::cout << YELLOW " > " << RESET;
        std::cin >> input;
        if (input == "return")
            return ;
    }
}

void    PhoneBook::searchContact(void) {
    str input;
    int index;

    system("clear");
    if (size == 0)
    {
        std::cout << YELLOW << "[ Contact List Empty ]" << RESET << std::endl;
        sleep(1);
        return ;
    }
    while (input != "return")
    {
        system("clear");
        std::cout << YELLOW << "=============== Contact List ================" << RESET << std::endl << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << "|     index| firstName|  lastName|  nickname|" << std::endl;
        std::cout << "=============================================" << std::endl;
        int i = -1;
        while (++i != size) {
            std::cout << "|" << "         " << (char)(i + 48) << "|" << doColumn(contacts[i].getFirstName()) << "|" << doColumn(contacts[i].getLastName()) << "|" << doColumn(contacts[i].getNick()) << "|"<< std::endl;
            std::cout << "=============================================" << std::endl << std::endl;
        }
        std::cout << "Write 'return' To Go Back" << std::endl;
        std::cout << std::endl << std::endl;
        std::cout << "Search for Index > ";
        std::cin >> input;
        index = (int)(input[0] - 48);
        if (index >= 0 && index < size && input.length() == 1)
            getContactInfo(contacts[index]);
        else if (input == "return")
            return ;
        else
        {
            std::cout << RED << "\n[ Invalid Option ]" << RESET << std::endl;
            sleep(1);
        }
    }
}

void    PhoneBook::exit(void) {
    system("clear");
    std::exit(0);
}
