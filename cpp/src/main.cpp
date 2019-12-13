#include "fizzbuzz.h"

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <map>

#include <iostream>
#include <iomanip>
#include <ios>
#include <sstream>

#include <optional>
#include <experimental/set>
#include <numeric>
#include <iterator>


int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        return 1;
    }

    int value(0);
    std::stringstream argstr(argv[1]);
    argstr >> value;

    std::cout << fizzbuzz(value) << std::endl;
    return 0;
}
