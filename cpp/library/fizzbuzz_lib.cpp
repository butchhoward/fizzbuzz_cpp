#include "fizzbuzz_lib.h"

#include <sstream>

using namespace fizzbuzzlib;

std::string fizzbuzzlib::fizzbuzz(const int value)
{
    if (value % 15 == 0)
    {
        return "fizzbuzz";
    }
    else if ( value % 3 == 0)
    {
        return "fizz";
    }
    else if (value % 5 == 0)
    {
        return "buzz";
    }
    else
    {
        std::stringstream s;
        s << value;
        return s.str();
    }
}
