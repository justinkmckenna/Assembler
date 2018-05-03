//Justin Mckenna
//Test length and capacity

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
        assert(str == "");
        assert(str.length() == 0);
        assert(str.capacity() == 0);

        std::cout << "str = 0 \n"
                  << "length: 0 capacity: 0 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str('a');

        // VERIFY
        assert(str == 'a');
        assert(str.length() == 1);
        assert(str.capacity() == 1);

        std::cout << "str = a \n"
                  << "length: 1 capacity: 1 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("abcdefghijklmnopqrstuvwxyz");

        // VERIFY
        assert(str == "abcdefghijklmnopqrstuvwxyz");
        assert(str.length() == 26);
        assert(str.capacity() == 26);

        std::cout << "str = abcdefghijklmnopqrstuvwxyz"
                  << "length: 26 capacity: 26 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is a long string I wrote. Here's a new line. \n Whoa, did you see what I did there?");

        // VERIFY
        assert(str == "This is a long string I wrote. Here's a new line. \n Whoa, did you see what I did there?");
        assert(str.length() == 87);
        assert(str.capacity() == 87);

        std::cout << "str = This is a long string I wrote. Here's a new line. \n Whoa, did you see what I did there? \n"
                  << "length: 87 capacity: 87 \n\n";
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("This is an even longer string, can you believe it? I am going to make this string just as long as capacity. I just have to keep typing things. I'm getting closer, I can feel it. 255 characters is much longer than I thought it would be. Anddddddd I'm done. I'm not done this sentence will go past the previous capacity because I can do that now. :)");

        // VERIFY
        assert(str == "This is an even longer string, can you believe it? I am going to make this string just as long as capacity. I just have to keep typing things. I'm getting closer, I can feel it. 255 characters is much longer than I thought it would be. Anddddddd I'm done. I'm not done this sentence will go past the previous capacity because I can do that now. :)");
        assert(str.length() == 347);
        assert(str.capacity() == 347);

        std::cout << "str = This is an even longer string, can you believe it?\n"
                  << " I am going to make this string just as long as capacity\n"
                  << ". I just have to keep typing things. I'm getting closer,\n"
                  << " I can feel it. 255 characters is much longer than I tho\n"
                  << "ught it would be. Anddddddd I'm done. I'm not done this \n"
                  << "sentence will go past the previous capacity because I c \n"
                  << "an do that now. :) \n"
                  << "length: 347 capacity: 347 \n\n";
    }
    std::cout << "Done testing length and capacity. \n";
}
