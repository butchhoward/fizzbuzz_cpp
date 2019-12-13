#include "fizzbuzz_test.h"
#include "fizzbuzz_lib.h"
#include "test_runner.h"

bool one_delivers_1()
{
    return fizzbuzzlib::fizzbuzz(1) == "1";
}

bool two_delivers_2()
{
    return fizzbuzzlib::fizzbuzz(2) == "2";
}

bool three_delivers_fizz()
{
    return fizzbuzzlib::fizzbuzz(3) == "fizz";
}

bool five_delivers_buzz()
{
    return fizzbuzzlib::fizzbuzz(5) == "buzz";
}

bool fifteen_delivers_fizzbuzz()
{
    return fizzbuzzlib::fizzbuzz(15) == "fizzbuzz";
}

bool fizzbuzz_test()
{
   test_runner::Tests tests = {
        {"one_delivers_1", one_delivers_1}
        ,{"two_delivers_2", two_delivers_2}
        ,{"three_delivers_fizz", three_delivers_fizz}
        ,{"five_delivers_buzz", five_delivers_buzz}
        ,{"fifteen_delivers_fizzbuzz", fifteen_delivers_fizzbuzz}
        //,{"XXX", XXX_test}
    };

    return test_runner::run_tests(tests);
}
