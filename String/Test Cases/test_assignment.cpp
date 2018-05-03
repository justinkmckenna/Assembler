//Justin Mckenna
//Testing string assignment

#include "string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String lhs("This is my previous sentence.");
        String rhs("This is my new sentence.");

        lhs = rhs;

        // VERIFY
        assert(lhs == rhs);

        std::cout << "lhs(This is my previous sentence.); \n"
                  << "rhs(This is my new sentence.); \n"
                  << "lhs = rhs; \n"
                  << "lhs == This is my new sentence. \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String lhs("This is my previous sentence.");
        String rhs;

        lhs = rhs;

        // VERIFY
        assert(lhs == rhs);

        std::cout << "lhs(This is my previous sentence.) \n"
                  << "rhs; \n"
                  << "lhs = rhs; \n"
                  << "lhs == empty \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String lhs;
        String rhs("This is my new sentence.");

        lhs = rhs;

        // VERIFY
        assert(lhs == rhs);

        std::cout << "lhs; \n"
                  << "rhs(This is my new sentence.); \n"
                  << "lhs = rhs; \n"
                  << "lhs == This is my new sentence. \n\n";
    }
    std::cout << "Done testing string assignment. \n";
