//Justin Mckenna
//Tests input and output

#include "string.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>

int main () {


    std::ifstream in("lots_of_strings.txt");
    if(!in) {
        std::cerr << "Could not open lots_of_strings.txt, stop. \n";
        exit(1);
    }

    std::cout << "Outputs text from lots_of_strings.txt. \n\n";

    String str;
    while(in >> str) {
        std::cout << str << ' ';
    }

    in.close();

    std::cout << std::endl << std::endl << "Done testing input and output. \n";
    return 0;
}
