//Justin Mckenna
//Test find string

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
        assert(str.findstr(0, "") == 0);

        std::cout << "String str; \n"
                  << "str.findstr(0, ) == 0 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("Look what we have here, a string.");

        // VERIFY
        assert(str.findstr(0, String("Look")) == 0);
        assert(str.findstr(5, String("we")) == 10);
        assert(str.findstr(9, String(", a")) == 22);
        assert(str.findstr(24, String("string.")) == 26);

        std::cout << "String str(Look what we have here, a string.); \n"
                  << "str.findstr(0, String(Look)) == 0 \n"
                  << "str.findstr(5, String(we)) == 10 \n"
                  << "str.findstr(9, String(, a)) == 22 \n"
                  << "str.findstr(24, String(string.)) == 26 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This string will return a bunch of -1's, watch.");

        // VERIFY
        assert(str.findstr(100, String("This")) == -1);
        assert(str.findstr(-5, String("return")) == -1);
        assert(str.findstr(9, String(", a")) == -1);
        assert(str.findstr(24, String("string.")) == -1);

        std::cout << "String str(This string will return a bunch of -1's, watch.); \n"
                  << "str.findstr(100, String(This)) == -1 \n"
                  << "str.findstr(-5, String(return)) == -1 \n"
                  << "str.findstr(9, String(, a)) == -1 \n"
                  << "str.findstr(24, String(string.)) == -1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is a really long string. I will use this really long string to make sure the findstr method works with a really long string. I will get pretty close to capacity to make sure this all works okay. I have a good feeling my method will be victorious.");

        // VERIFY
        assert(str.findstr(56, String("with a really long string.")) == 103);
        assert(str.findstr(0, String("victorious.")) == 240);
        assert(str.findstr(250, String(".")) == 250);
        assert(str.findstr(159, String("I have a good feeling")) == 200);

        std::cout << "This is a really long string. I will use this really lon\n"
                  << "g string to make sure the findstr method works with a re\n"
                  << "ally long string. I will get pretty close to capacity to\n"
                  << " make sure this all works okay. I have a good feeling my\n"
                  << " method will be victorious. \n"
                  << "str.findstr(56, String(with a really long string.)) == 103 \n"
                  << "str.findstr(0, String(victorious)) == 240 \n"
                  << "str.findstr(250, String(.)) == 250 \n"
                  << "str.findstr(159, String(I have a good feeling)) == 200 \n\n";
    }
    std::cout << "Done testing find string. \n";
}
