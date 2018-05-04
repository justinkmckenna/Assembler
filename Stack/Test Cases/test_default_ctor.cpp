//Justin Mckenna
//testing default ctor

#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <cassert>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<int> st passed\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<String> st passed\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<char> st passed\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        // VERIFY
        assert(st.empty());
        assert(!st.full());

        std::cout << "stack<double> st passed\n";
    }
    std::cout << "Done testing default contstructor. \n";
}
