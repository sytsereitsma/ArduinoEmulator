#include "StdOutStream.h"
#include <iostream>

void StdOutStream::write (uint8_t inValue) {
    std::cout << static_cast <char> (inValue);
}
