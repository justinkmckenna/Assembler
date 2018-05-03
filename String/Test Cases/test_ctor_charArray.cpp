//Justin Mckenna
//Test charArray Constructor

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("abcde");

        // VERIFY
        assert(str == "abcde");
        assert(str.length() == 5);
        assert(str.capacity() == 5);

        std::cout << "str(abcde) = abcde \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is my string.");

        // VERIFY
        assert(str == "This is my string.");
        assert(str.length() == 18);
        assert(str.capacity() == 18);

        std::cout << "str(This is my string.) = This is my string. \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("abcdefghijklmnopqrstuvwxyz123456789!@#$%^&*()[]{};:/");

        // VERIFY
        assert(str == "abcdefghijklmnopqrstuvwxyz123456789!@#$%^&*()[]{};:/");
        assert(str.length() == 52);
        assert(str.capacity() == 52);

        std::cout << "str(abcdefghijklmnopqrstuvwxyz123456789!@#$%^&*()[]{};:/)"
                  << "\n = abcdefghijklmnopqrstuvwxyz123456789!@#$%^&*()[]{};:/"
                  << " \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This string has a new line, \n see?");

        // VERIFY
        assert(str == "This string has a new line, \n see?");
        assert(str.length() == 34);
        assert(str.capacity() == 34);

        std::cout << "str(This string has a new line, \n see?)"
                  << " = This string has a new line, \n see? \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[16];
        for(int i = 0; i < 15; i++) {
            x[i] = 'a';
        }
        x[15] = 0;
        String str(x);

        // VERIFY
        assert(str == "aaaaaaaaaaaaaaa");
        assert(str.length() == 15);
        assert(str.capacity() == 15);

        std::cout << "char x[16] elements are a\n"
                  << " str(x) = aaaaaaaaaaaaaaa \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[6] = {'k', 'm', 'q', '$', 'm', 0};
        String str(x);

        // VERIFY
        assert(str == "kmq$m");
        assert(str.length() == 5);
        assert(str.capacity() == 5);

        std::cout << "char x[6] random chars"
                  << "\n str(x) = kmq$m \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[6] = "hello";
        String str(x);

        // VERIFY
        assert(str == "hello");
        assert(str.length() == 5);
        assert(str.capacity() == 5);

        std::cout << "char x[6] = hello"
                  << "\n str(x) = hello \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[21] = "Array of characters!";
        String str(x);

        // VERIFY
        assert(str == "Array of characters!");
        assert(str.length() == 20);
        assert(str.capacity() == 20);

        std::cout << "char x[21] Array of characters!"
                  << "\n str(x) = Array of characters! \n\n";
    }
    std::cout << "Done testing charArray constructor. \n";
}
