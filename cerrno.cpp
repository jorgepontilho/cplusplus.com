#include <iostream>
#include <cmath>
#include <cerrno>
#include <cstring>
#include <clocale>

int main()
{
    double not_a_number = std::log(-1.0);
    std::cout << std::log(-1) << " - "<< errno << " - " << std::strerror(errno) << '\n';
    
    not_a_number = std::log(1);
    std::cout << std::log(1) << " - "<< errno << " - " << std::strerror(errno) << '\n';
    
    /* 
    //https://en.cppreference.com/w/cpp/error/errno_macros
    if (errno == EDOM) {
        std::cout << "log(-1) failed: " << std::strerror(errno) << '\n';
        std::setlocale(LC_MESSAGES, "de_DE.utf8");
        std::cout << "Or, in German, " << std::strerror(errno) << '\n';
    }*/
    
    return 0;
}

