#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Please write 1 argument :" << std::endl;
        std::cout << "DEBUG | INFO | WARNING | ERROR" << std::endl;
        return (1);
    }
    Harl h = Harl();
    h.filter(argv[1]);
    return (0);
}