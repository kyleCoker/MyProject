// src/main.cpp
#include <iostream>
#include <string_view>

int main(int argc, char** argv) {
    std::cout << "Hello from myprog (C++23)!" << std::endl;
    if (argc > 1) {
        std::cout << "Arg[1]: " << std::string_view(argv[1]) << std::endl;
    }
    return 0;
}
