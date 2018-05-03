//Justin Mckenna
//Test subscript

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
        assert(str[0] == 'a');
        assert(str[1] == 'b');
        assert(str[2] == 'c');
        assert(str[3] == 'd');
        assert(str[4] == 'e');
        assert(str[5] == 0);

        std::cout << "str(abcde) = abcde \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is my string.");

        // VERIFY
        assert(str[0] == 'T');
        assert(str[1] == 'h');
        assert(str[2] == 'i');
        assert(str[3] == 's');
        assert(str[4] == ' ');
        assert(str[5] == 'i');
        assert(str[6] == 's');
        assert(str[7] == ' ');
        assert(str[8] == 'm');
        assert(str[9] == 'y');
        assert(str[10] == ' ');
        assert(str[11] == 's');
        assert(str[12] == 't');
        assert(str[13] == 'r');
        assert(str[14] == 'i');
        assert(str[15] == 'n');
        assert(str[16] == 'g');
        assert(str[17] == '.');
        assert(str[18] == 0);

        std::cout << "str(This is my string.) = This is my string. \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("abcdefghijklmnopqrstuvwxyz123456789!@#$%^&*()[]{};:/");

        // VERIFY
        assert(str[0] == 'a');
        assert(str[9] == 'j');
        assert(str[15] == 'p');
        assert(str[20] == 'u');
        assert(str[25] == 'z');
        assert(str[26] == '1');
        assert(str[31] == '6');
        assert(str[34] == '9');
        assert(str[35] == '!');
        assert(str[39] == '%');
        assert(str[45] == '[');
        assert(str[48] == '}');
        assert(str[51] == '/');
        assert(str[52] == 0);
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
        assert(str[0] == 'T');
        assert(str[3] == 's');
        assert(str[5] == 's');
        assert(str[9] == 'n');
        assert(str[13] == 'a');
        assert(str[18] == 'n');
        assert(str[21] == ' ');
        assert(str[25] == 'e');
        assert(str[27] == ' ');
        assert(str[28] == '\n');
        assert(str[29] == ' ');
        assert(str[33] == '?');
        assert(str[34] == 0);

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
        assert(str[0] == 'a');
        assert(str[4] == 'a');
        assert(str[9] == 'a');
        assert(str[14] == 'a');
        assert(str[15] == 0);

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
        assert(str[0] == 'k');
        assert(str[1] == 'm');
        assert(str[2] == 'q');
        assert(str[3] == '$');
        assert(str[4] == 'm');
        assert(str[5] == 0);

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
        assert(str[0] == 'h');
        assert(str[1] == 'e');
        assert(str[2] == 'l');
        assert(str[3] == 'l');
        assert(str[4] == 'o');
        assert(str[5] == 0);

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
        assert(str[0] == 'A');
        assert(str[4] == 'y');
        assert(str[9] == 'c');
        assert(str[14] == 'c');
        assert(str[19] == '!');
        assert(str[20] == 0);

        std::cout << "char x[21] = Array of characters!"
                  << "\n str(x) = Array of characters! \n \n";
    }
    std::cout << "Done testing subscript. \n";
}
