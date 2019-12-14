#include "fizzbuzz_lib.h"

#include <sstream>
#include <map>

using namespace fizzbuzzlib;

class Fizzbuzzer {
public:
    Fizzbuzzer()
    {
        for (int i = 1; i < 100; i++)
        {
            std::stringstream s;
            s << i;
            fizzmap[i] = s.str();
        }
        for (int i = 3; i < 100; i += 3)
        {
            fizzmap[i] = "fizz";
        }
        for (int i = 5; i < 100; i += 5)
        {
            fizzmap[i] = "buzz";
        }
        for (int i = 15; i < 100; i += 15)
        {
            fizzmap[i] = "fizzbuzz";
        }
    }

    const std::string& operator[](int v)
    {
        return fizzmap[v];
    }

private:
    std::map<int, std::string> fizzmap;
};

std::string fizzbuzzlib::fizzbuzz(const int value)
{
    Fizzbuzzer fizzer;
    return fizzer[value];
}
