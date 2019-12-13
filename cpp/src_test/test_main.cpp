#include <iostream>
#include "test_runner.h"

#include "fizzbuzz_test.h"
//MAKEMODULE INCLUDE MARKER. DO NOT DELETE


int main()
{
    test_runner::Tests tests = {
        {"fizzbuzz_test", fizzbuzz_test}
        //MAKEMODULE LIST MARKER. DO NOT DELETE
    };

    return test_runner::run_tests(tests) ? 0 : 1;


}
