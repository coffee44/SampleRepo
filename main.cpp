/*
    This file is just for test.
*/

#include <iostream>
#include <functional>

int main() {

    [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n"; }();

    return 0;
}