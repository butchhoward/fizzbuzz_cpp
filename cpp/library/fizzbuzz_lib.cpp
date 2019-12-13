#include "fizzbuzz_lib.h"

using namespace fizzbuzzlib;

std::string fizzbuzzlib::fizzbuzz(const int value)
{
    if (value == 1)
    {
        return "1";
    }
    else if (value == 2)
    {
        return "2";
    }
    else
    {
        return "fizz";
    }
}
