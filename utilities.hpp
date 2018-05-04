//Justin Mckenna
//Utilities for Stack Class

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include "../string/string.hpp"
#include "stack.hpp"

String infixToPostfix (String);
String postfixToAssembly (String);
String evaluate (String, String, String, String&, int);

#endif
