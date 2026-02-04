#include <cassert>
#include "../include/util.hpp"
#include <iostream>

using namespace std;

void test_hello() {
    string ans = hello();
    string exp = "Hello World!";
    assert(ans == exp);
}

int main() {
    test_hello();
    cerr << "all done..." << endl;
}