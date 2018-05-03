//Justin Mckenna
//Test Default Constructor

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str;

        // VERIFY
        assert(str == "");
        assert(str.length() == 0);
        assert(str.capacity() == 0);

        std::cout << "String str; \n"
                  << "str = " << str << std::endl
                  << "str is empty. \n\n";
    }
    std::cout << "Done testing default contstructor. \n";
}
