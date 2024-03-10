#include "include_lib.h"
#include <iostream>

int main() {
    std::cout << "Hello World!";
    IncludeLib *lib_include = new IncludeLib();
    lib_include->PrintText();
    return 0;
}