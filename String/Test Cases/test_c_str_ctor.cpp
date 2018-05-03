//Justin Mckenna
//Test Character Constructor

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('a');

        // VERIFY
        assert(str[0] == 'a');
        assert(str[1] == 0);

        std::cout << "str('a') \n"
                  << "str[0] = a \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('j');

        // VERIFY
        assert(str[0] == 'j');
        assert(str[1] == 0);

        std::cout << "str('j') \n"
                  << "str[0] = j \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('4');

        // VERIFY
        assert(str[0] == '4');
        assert(str[1] == 0);

        std::cout << "str('4') \n"
                  << "str[0] = 4 \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('~');

        // VERIFY
        assert(str[0] == '~');
        assert(str[1] == 0);

        std::cout << "str('~') \n"
                  << "str[0] = ~ \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('*');

        // VERIFY
        assert(str[0] == '*');
        assert(str[1] == 0);

        std::cout << "str('*') \n"
                  << "str[0] = * \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('.');

        // VERIFY
        assert(str[0] == '.');
        assert(str[1] == 0);

        std::cout << "str('.') \n"
                  << "str[0] = . \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str(' ');

        // VERIFY
        assert(str[0] == ' ');
        assert(str[1] == 0);

        std::cout << "str(' ') \n"
                  << "str[0] =   \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x = 'a';
        String str(x);

        // VERIFY
        assert(str[0] == 'a');
        assert(str[1] == 0);

        std::cout << "char x = a \n"
                  << "str(x) \n"
                  << "str[0] = a \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x = 'f';
        String str(x);

        // VERIFY
        assert(str[0] == 'f');
        assert(str[1] == 0);

        std::cout << "char x = f \n"
                  << "str(x) \n"
                  << "str[0] = f \n"
                  << "str[1] = null \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x = ';';
        String str(x);

        // VERIFY
        assert(str[0] == ';');
        assert(str[1] == 0);

        std::cout << "char x = ; \n"
                  << "str(x) \n"
                  << "str[0] = ; \n"
                  << "str[1] = null \n \n";
    }
    std::cout << "Done testing Character String Constructor. \n";
}
