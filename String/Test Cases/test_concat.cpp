//Justin Mckenna
//Test concat

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a('a');
        String b('b');

        std::cout << "String a('a'); String b('b'); \n";
        // VERIFY
        assert((a + b) == "ab");
        assert(a == 'a');
        assert(b == 'b');

        std::cout << "a + b = ab \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("abcd");
        String b('b');

        std::cout << "String a(abcd); String b('b'); \n";
        // VERIFY
        assert((a + b) == "abcdb");
        assert((b + a) == "babcd");
        assert(a == "abcd");
        assert(b == 'b');

        std::cout << "a + b = abcdb \n"
                  << "b + a = babcd \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char ch = 'b';
        String a("abcd");

        std::cout << "String a(abcd); char ch = 'b'; \n";
        // VERIFY
        assert((a + ch) == "abcdb");
        assert((ch + a) == "babcd");
        assert(a == "abcd");
        assert(ch == 'b');

        std::cout << "a + ch = abcdb \n"
                  << "ch + a = babcd \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char s[6] = {'a', 'b', 'c', 'd', 'e', 0};
        String a("abcd");

        std::cout << "String a(abcd); char s[6] = abcde; \n";
        // VERIFY
        assert((a + s) == "abcdabcde");
        assert((s + a) == "abcdeabcd");
        assert(a == "abcd");
        assert(s[0] == 'a');
        assert(s[4] == 'e');
        assert(s[5] == 0);

        std::cout << "a + s = abcdabcde \n"
                  << "s + a = abcdeabcd \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a('a');
        String b('b');

        a += b;

        std::cout << "String a('a'); String b('b'); \na += b; \n";
        // VERIFY
        assert(a == "ab");
        assert(b == 'b');

        std::cout << "a = ab \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("abcd");
        String b('e');

        a += b;

        std::cout << "String a(abcd); String b('e'); \na += b; \n";
        // VERIFY
        assert(a == "abcde");
        assert(b == 'e');

        std::cout << "a = abcde \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("abcd");
        char b = 'e';

        a += b;

        std::cout << "String a(abcd); char b = 'e'; \na += b; \n";
        // VERIFY
        assert(a == "abcde");
        assert(b == 'e');

        std::cout << "a = abcde \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("abcd");
        char b[5] = {'e', 'f', 'g', 'h', 0};

        a += b;

        std::cout << "String a(abcd); char b[5] = efgh; \na += b; ";
        // VERIFY
        assert(a == "abcdefgh");
        assert(b[0] == 'e');
        assert(b[3] == 'h');
        assert(b[4] == 0);

        std::cout << "a = abcdefgh \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("This is a sentance. ");
        String b("This is another sentance.");

        a += b;

        std::cout << "String a(This is a sentance. ); \n"
                  << "String b(This is another sentance.); \n"
                  << "a += b; \n";
        // VERIFY
        assert(a == "This is a sentance. This is another sentance.");
        assert(b == "This is another sentance.");

        std::cout << "a = This is a sentance. This is another sentance. \n\n";
    }
    std::cout << "Done testing concat. \n";
