#include <string>
#include <iostream>

typedef std::string str;

int main(void) {
    str string = "HI THIS IS BRAIN";
    str *pointer = &string;
    str &reference = string;

    std::cout << &string << std::endl;
    std::cout << pointer << std::endl;
    std::cout << &reference << std::endl;

    std::cout << string << std::endl;
    std::cout << *pointer << std::endl;
    std::cout << reference << std::endl;
}