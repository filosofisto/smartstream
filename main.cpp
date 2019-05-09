#include <iostream>
#include "SmartStream.h"

int main() {
    SmartStream ss(R"(D:\Users\ter81646\Downloads\test.txt)");
    ss << "Hello, World!" << std::endl << "Aother line" << endl;
    return 0;
}