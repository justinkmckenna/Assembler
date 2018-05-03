//Justin Mckenna
//Test less than/equal to, greater than/equal to  operator

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test cases is cool");

        // VERIFY
        assert(a < b);

        std::cout << "String a(test cases are cool) \n"
                  << "String b(test cases is cool) \n"
                  << "b < a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test Cases are cool");

        // VERIFY
        assert(b < a);

        std::cout << "String a(test cases are cool) \n"
                  << "String b(test Cases are cool) \n"
                  << "b < a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test Cases are cool");

        // VERIFY
        assert(b <= a);

        std::cout << "String a(test cases are cool) \n"
                  << "String b(test Cases are cool) \n"
                  << "b <= a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test cases are cool");

        // VERIFY
        assert(b <= a);

        std::cout << "String a(test cases are cool) \n"
                  << "String b(test cases are cool) \n"
                  << "b <= a \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test Cases are cool");

        // VERIFY
        assert(a >= b);

        std::cout << "String a(test cases are cool) \n"
                  << "String b(test Cases are cool) \n"
                  << "a >= b \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        String b("test cases are cool");

        // VERIFY
        assert(a >= b);

        std::cout << "String a(test cases are cool) \n"
                  << "Srting b(test Cases are cool) \n"
                  << "a >= b \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char a[] = "test case";
        String b("test cases are cool");

        // VERIFY
        assert(a < b);

        std::cout << "char a[] = test case \n"
                  << "String b(test cases are cool) \n"
                  << "a < b \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char a = 'A';
        String b("test cases are cool");

        // VERIFY
        assert(a < b);

        std::cout << "char a = A \n"
                  << "String b(test cases are cool) \n"
                  << "a < b \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String a("test cases are cool");
        char b = 'A';
        // VERIFY
        assert(a > b);

        std::cout << "String a(test cases are cool) \n"
                  << "char b = A \n"
                  << "a > b \n \n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char a = 'A';
        String b('A');

        // VERIFY
        assert(a <= b);

        std::cout << "char a = A \n"
                  << "String b(A) \n"
                  << "a <= b \n \n";
    }
    std::cout << "Done testing less than, greater than operator. \n";
}
