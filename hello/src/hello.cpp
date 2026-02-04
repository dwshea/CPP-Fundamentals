#include <iostream>
#include <string>
#include "../include/util.hpp"
#include "../tests/test_util.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cerr << "argc = " << argc << endl;
    cerr << argv[0] << endl;
    if(argc > 1 and string(argv[1]) == "test") 
        test_hello();
        cout << hello() << endl;
    return 0;
}