//Justin Mckenna
//Testing copy ctor

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("This is string a.");
        String b(a);

        // VERIFY
        assert(a == "This is string a.");
        assert(b == "This is string a.");

        std::cout << "String a(This is string a.); \n"
                  << "String b(a); \n"
                  << "b = This is string a. \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("This is string a.");
        String b = a;

        // VERIFY
        assert(a == "This is string a.");
        assert(b == "This is string a.");

        std::cout << "String a(This is string a.); \n"
                  << "String b = a; \n"
                  << "b = This is string a. \n\n";
    }
    std::cout << "Done testing copy constructor. \n";
}
