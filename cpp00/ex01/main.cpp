#include "PhoneBook.hpp"

void    menu(void)
{
    system("clear");
    std::cout << "===== " << YELLOW << "MENU" << RESET << " =====" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD - add a new contact" << std::endl;
    std::cout << "SEARCH - search for a contact" << std::endl;
    std::cout << "EXIT - exit" << std::endl;
    std::cout << std::endl;
    std::cout << "> ";
}

int main(void)
{
    PhoneBook pb;
    str input;

    while (1)
    {
        menu();
        std::cin >> input;
        if (input == "ADD")
            pb.addContact();
        else if (input == "SEARCH")
            pb.searchContact();
        else if (input == "EXIT")
            pb.exit();
        else
        {
            std::cout << RED << "\n[ Invalid Option ]" << RESET << std::endl;
            sleep(1);
        }
    }
}
