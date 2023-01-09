#include "Harl.hpp"

int main(void) {
    str complain;

    complain = "";
    std::cout << "Write 'exit' to leave the program" << std::endl << std::endl;
    while (complain != "exit") {
        std::cin >> complain;
        Harl h = Harl();
        h.complain(complain);
        std::cout << std::endl;
    }
    return (0);
}