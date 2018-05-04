//Justin Mckenna
//testing push and pop

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

        st.push(10);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10);

        std::cout << "st.push(10)\n"
                  << "top == 10\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        st.push(10);
        st.push(20);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 20);

        std::cout << "st.push(10)\n"
                  << "st.push(20)\n"
                  << "top == 20\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st;

        st.push(10);
        st.push(20);
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10);

        std::cout << "st.push(10)\n"
                  << "st.push(20)\n"
                  << "st.pop()\n"
                  << "top == 10\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> st;

        st.push("My String.");

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "My String.");

        std::cout << "st.push(My String.)\n"
                  << "top == My String.\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> st;

        st.push("My String.");
        st.push("My new String.");

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "My new String.");

        std::cout << "st.push(My String.)\n"
                  << "st.push(My new String.)\n"
                  << "top == My new String.\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> st;

        st.push("My String.");
        st.push("My new String.");
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == "My String.");

        std::cout << "st.push(My String.)\n"
                  << "st.push(My new String.)\n"
                  << "st.pop()\n"
                  << "top == My String.\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'a');

        std::cout << "st.push(a)\n"
                  << "top == a\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');
        st.push('b');

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'b');

        std::cout << "st.push(a)\n"
                  << "st.push(b)\n"
                  << "top == b\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st;

        st.push('a');
        st.push('b');
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 'a');

        std::cout << "st.push(a)\n"
                  << "st.push(b)\n"
                  << "st.pop()\n"
                  << "top == a\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(10.5);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10.5);

        std::cout << "st.push(10.5)\n"
                  << "top == 10.5\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(10.5);
        st.push(20.25);

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 20.25);

        std::cout << "st.push(10.5)\n"
                  << "st.push(20.25)\n"
                  << "top == 20.25\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st;

        st.push(10.5);
        st.push(20.25);
        st.pop();

        // VERIFY
        assert(!st.empty());
        assert(!st.full());
        assert(st.top() == 10.5);

        std::cout << "st.push(10.5)\n"
                  << "st.push(20.25)\n"
                  << "st.pop()\n"
                  << "top == 10.5\n\n";
    }
    std::cout << "Done testing push and pop.\n";
}
