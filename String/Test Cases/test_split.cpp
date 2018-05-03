//Justin Mckenna
//Tests split function

#include "string.hpp"
#include <iostream>
#include <cassert>
#include <vector>

int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is a string.");

        std::vector<String> result = str.split(' ');

        std::cout << "str(This is a string.) \n"
                  << "str.split(' ') \n";
        // VERIFY
        assert(result[0] == "This");
        assert(result[1] == "is");
        assert(result[2] == "a");
        assert(result[3] == "string.");

        std::cout << "Split successful! \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("18/Sep/2002:12:05:25 -400");

        std::vector<String> result = str.split(':');

        std::cout << "str(18/Sep/2002:12:05:25 -400) \n"
                  << "str.split(':') \n";
        // VERIFY
        assert(result[0] == "18/Sep/2002");
        assert(result[1] == "12");
        assert(result[2] == "05");
        assert(result[3] == "25 -400");

        std::cout << "Split successful! \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str;

        std::vector<String> result = str.split(' ');

        std::cout << "str() \n"
                  << "str.split(' ') \n";
        // VERIFY
        assert(result[0] == "");

        std::cout << "Split successful!(kind of) \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("-a--b-");

        std::vector<String> result = str.split('-');

        std::cout << "str(-a--b-) \n"
                  << "str.split('-') \n";
        // VERIFY
        assert(result[0] == "");
        assert(result[1] == "a");
        assert(result[2] == "");
        assert(result[3] == "b");
        assert(result[4] == "");

        std::cout << "Split successful! \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str(" ");

        std::vector<String> result = str.split(' ');

        std::cout << "str( ) \n"
                  << "str.split(' ') \n";
        // VERIFY
        assert(result[0] == "");

        std::cout << "Split successful! \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("131.123.47.176 - - [18/Sep/2002:12:05:25 -0400] \"GET /~darci/ HTTP/1.0\" 200 5625");

        std::vector<String> result = str.split(' ');

        std::cout << "str(131.123.47.176 - - [18/Sep/2002:12:05:25 -0400] \"GET /~darci/ HTTP/1.0\" 200 5625) \n"
                  << "str.split(' ') \n";
        // VERIFY
        assert(result[0] == "131.123.47.176");
        assert(result[1] == "-");
        assert(result[2] == "-");
        assert(result[3] == "[18/Sep/2002:12:05:25");
        assert(result[4] == "-0400]");
        assert(result[5] == "\"GET");
        assert(result[6] == "/~darci/");
        assert(result[7] == "HTTP/1.0\"");
        assert(result[8] == "200");
        assert(result[9] == "5625");

        std::cout << "Split successful! \n\n";
    }
    std::cout << "Done testing split function. \n";
}
