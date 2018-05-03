//Justin Mckenna
//Test findch

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
        assert(str.findch(0, 'a') == -1);

        std::cout << "String str; \n"
                  << "findch(0, 'a') = -1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is mah string.");

        // VERIFY
        assert(str.findch(0, 'T') == 0);
        assert(str.findch(4, 'a') == 9);
        assert(str.findch(6, ' ') == 7);
        assert(str.findch(11, 'i') == 15);

        std::cout << "String str(This is mah string.); \n"
                  << "findch(0, 'T') = 0 \n"
                  << "findch(4, 'a') = 9 \n"
                  << "findch(6, ' ') = 7 \n"
                  << "findch(11, 'i') = 15 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("Trying to find chars that are not here.");

        // VERIFY
        assert(str.findch(0, 'z') == -1);
        assert(str.findch(4, 'q') == -1);
        assert(str.findch(6, ']') == -1);
        assert(str.findch(11, '<') == -1);

        std::cout << "String str(Trying to find chars that are not here.); \n"
                  << "findch(0, 'z') = -1 \n"
                  << "findch(4, 'q') = -1 \n"
                  << "findch(6, ']') = -1 \n"
                  << "findch(11, '<') = -1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("Using positions that are outside of bounds.");

        // VERIFY
        assert(str.findch(-1, 'U') == -1);
        assert(str.findch(-26, 'o') == -1);
        assert(str.findch(43, 's') == -1);
        assert(str.findch(72, '.') == -1);

        std::cout << "String str(Using positions that are outside of bounds.); \n"
                  << "findch(-1, 'U') = -1 \n"
                  << "findch(-26, 'o') = -1 \n"
                  << "findch(43, 's') = -1 \n"
                  << "findch(72, '.') = -1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("Let's do one more sentence for good measure.");

        // VERIFY
        assert(str.findch(5, ' ') == 5);
        assert(str.findch(7, 'f') == 27);
        assert(str.findch(20, 'e') == 22);
        assert(str.findch(31, 's') == 39);

        std::cout << "String str(Let's do one more sentence for good measure.); \n"
                  << "findch(5, ' ') = 5 \n"
                  << "findch(7, 'f') = 27 \n"
                  << "findch(20, 'e') = 22 \n"
                  << "findch(31, 's') = 39 \n\n";
    }
    std::cout << "Done testing findch. \n";
}
