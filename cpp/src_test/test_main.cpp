#include <iostream>
#include "test_runner.h"

//MAKEMODULE INCLUDE MARKER. DO NOT DELETE


bool hello_world_test()
{
    std::cout << "Hello World" << std::endl;
    return std::cout.good();
}

int main()
{
    test_runner::Tests tests = {
        {"hello world test",      hello_world_test}
        // ,{"XXX", XXX_test}
        //MAKEMODULE LIST MARKER. DO NOT DELETE
    };

    return test_runner::run_tests(tests) ? 0 : 1;


}
