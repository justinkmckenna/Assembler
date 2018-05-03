//Justin Mckenna
//testing convertToNum

#include "string.hpp"
#include <iostream>
#include <cassert>

int main() {
String test1("0");
int test1Int = test1.convertToNum();
assert(test1Int == 0);
std::cout << test1Int << std::endl;

String test2("123");
int test2Int = test2.convertToNum();
assert(test2Int == 123);
std::cout << test2Int << std::endl;

std::cout << "done testing convertToNum \n";
}
