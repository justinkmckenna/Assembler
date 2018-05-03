//Justin Mckenna
//Test substring

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
        assert(str.substr(0, 5) == "");

        std::cout << "String str; \n"
                  << "str.substring(0, 5) ==  \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is a string.");

        // VERIFY
        assert(str.substr(0, 3) == "This");
        assert(str.substr(5, 6) == "is");
        assert(str.substr(8, 8) == "a");
        assert(str.substr(10, 16) == "string.");

        std::cout << "String str(This is a string.); \n"
                  << "str.substr(0, 3) == This \n"
                  << "str.substr(5, 6) == is \n"
                  << "str.substr(8, 8) == a \n"
                  << "str.substr(10, 16) == string. \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is another string. \nIsn't that cool?");

        // VERIFY
        assert(str.substr(-5, 3) == "This");
        assert(str.substr(8, 6) == "");
        assert(str.substr(100, 125) == "");
        assert(str.substr(23, 40) == " \nIsn't that cool?");

        std::cout << "String str(This is another string. \nIsn't that cool?); \n"
                  << "str.substr(-5, 3) == This \n"
                  << "str.substr(8, 6) ==  \n"
                  << "str.substr(100, 125) ==  \n"
                  << "str.substr(23, 40) ==  \nIsn't that cool? \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is a really long string. I will use this really long string to make sure the substring method works with a really long string. I will get pretty close to capacity to make sure this all works okay. I have a good feeling my method will be victorious.");

        // VERIFY
        assert(str.substr(10, 28) == "really long string.");
        assert(str.substr(68, 130) == "make sure the substring method works with a really long string.");
        assert(str.substr(139, 166) == "get pretty close to capacity");
        assert(str.substr(224, 252) == "my method will be victorious.");

        std::cout << "String str(This is a really long string. I will use this\n"
                  << " really long string to make sure the substring method wo\n"
                  << "rks with a really long string. I will get pretty close t\n"
                  << "o capacity to make sure this all works okay. I have a go\n"
                  << "od feeling my method will be victorious.); \n"
                  << "str.substr(10, 28) == really long string. \n"
                  << "str.substr(68, 130) == make sure the substring method works \n"
                  << "str.substr(139, 166) == get pretty close to capacity \n"
                  << "str.substr(224, 252) == my method will be victorious.  \n\n";
    }
    std::cout << "Done testing substring. \n";
}
