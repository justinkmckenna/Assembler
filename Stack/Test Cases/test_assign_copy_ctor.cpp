//Justin Mckenna
///testing assignment operator

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
        stack<int> st1;
        stack<int> st2;

        st1.push(10);
        st1.push(20);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 20);
        assert(st2.top() == 20);

        std::cout << "stack<int> st1, st2\n"
                  << "st2 = st1\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st1;
        stack<int> st2;

        st1.push(10);
        st1.push(20);

        st1 = st2;

        // VERIFY
        assert(st1.empty());
        assert(st2.empty());

        std::cout << "stack<int> st1, st2\n"
                  << "st1 = st2\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int> st1;
        stack<int> st2;

        st1.push(10);
        st1.push(20);

        st2.push(5);
        st2.push(9);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 20);
        assert(st2.top() == 20);

        std::cout << "stack<int> st1, st2\n"
                  << "st2 = st1\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double> st1;
        stack<double> st2;

        st1.push(20.5);
        st1.push(10.23);

        st2.push(98.34);
        st2.push(1923.1);

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 10.23);
        assert(st2.top() == 10.23);

        std::cout << "stack<double> st1, st2\n"
                  << "st2 = st1\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char> st1;
        stack<char> st2;

        st1.push('a');
        st1.push('b');

        st2.push('c');
        st2.push('d');

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == 'b');
        assert(st2.top() == 'b');

        std::cout << "stack<char> st1, st2\n"
                  << "st2 = st1\n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String> st1;
        stack<String> st2;

        st1.push("This is a string.");
        st1.push("This is tos.");

        st2.push("This is another string.");
        st2.push("Hello World!");

        st2 = st1;

        // VERIFY
        assert(!st1.empty());
        assert(!st2.empty());
        assert(st1.top() == "This is tos.");
        assert(st2.top() == "This is tos.");

        std::cout << "stack<String> st1, st2\n"
                  << "st2 = st1\n\n";
    }
    std::cout << "Done testing assign and copy ctor. \n";
}
