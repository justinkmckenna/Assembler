//Justin Mckenna
//testing getline function

#include "string.hpp"
#include <iostream>
#include <fstream>

int main() {
std::ifstream file ("log_2_small.txt");
if(!file.is_open()) return 1;

String line;
getline(file, line);
while(!file.eof()) {
    std::cout << line << std::endl;
    getline(file, line);
}

file.close();
std::cout << "done testing getline \n";
}
