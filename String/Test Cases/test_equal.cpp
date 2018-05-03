//Justin Mckenna
//Test equal operator and not equal operator

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
        assert(str[0] == 0);
        assert(0 == str[0]);

        std::cout << "str \n str = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('a');

        // VERIFY
        assert(str == 'a');
        assert('a' == str);
        assert(str != 'b');
        assert('b' != str);

        std::cout << "str('a') \n str = a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char ch = 'a';
        String str(ch);

        // VERIFY
        assert(str == ch);
        assert(ch == str);
        assert(str != 'b');
        assert('b' != str);

        std::cout << "char ch = 'a' \n str(ch) \n str = a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is my string.");
        String samestr("This is my string.");
        String str1("This is not my string.");

        // VERIFY
        assert(str == samestr);
        assert(samestr == str);
        assert(str != str1);
        assert("This is not my string." != str);

        std::cout << "str(This is my string.) \n"
                  << "samestr(This is my string.) \n"
                  << "str1(This is not my string.) \n"
                  << "str = samestr \n"
                  << "samestr == str \n"
                  << "str != str1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[6] = "hello";
        String str(x);

        // VERIFY
        assert(str == "hello");
        assert("hello" == str);
        assert(str != "goodbye");
        assert("goodbye" != str);

        std::cout << "char x[6] = hello \n str(x) \n str = hello \n \n";
    }
    std::cout << "Done testing equal operator. \n";
}
