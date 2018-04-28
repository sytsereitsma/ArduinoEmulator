#include "StdOutStream.h"
#include <iostream>

size_t StdOutStream::write (uint8_t inValue) {
    std::cout << static_cast <char> (inValue);
    return 1u;
}
