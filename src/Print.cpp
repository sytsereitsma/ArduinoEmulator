#include "Print.h"
#include <iomanip>

size_t Print::println() {    
    return 1;
}

size_t Print::println(char inValue) {
    return writeln(inValue);
}

size_t Print::println(int32_t inValue) {
    return writeln(inValue);
}

size_t Print::println(uint32_t inValue) {
    return writeln(inValue);
}

size_t Print::println(int64_t inValue) {
    return writeln(inValue);
}

size_t Print::println(float inValue, uint8_t inDigits) {
    return println(static_cast <double> (inValue), inDigits);
}

size_t Print::println(double inValue, uint8_t inDigits) {
    auto n = print(inValue, inDigits);
    write('\n');
    return n + 1;
}

size_t Print::println(const __FlashStringHelper* inValue) {
    return writeln(inValue);
}

size_t Print::println(const char* inValue) {
    return writeln(inValue);
}

size_t Print::print(char inValue) {
    return writeImpl(inValue);
}

size_t Print::print(int32_t inValue) {
    return writeImpl(inValue);
}

size_t Print::print(uint32_t inValue) {
    return writeImpl(inValue);
}

size_t Print::print(int64_t inValue) {
    return writeImpl(inValue);
}

size_t Print::print(float inValue, uint8_t inDigits) {
    return print(static_cast <double> (inValue), inDigits);
}

size_t Print::print(double inValue, uint8_t inDigits) {
    std::ostringstream str;
    str << std::fixed << std::setprecision (inDigits) << inValue;
    for (auto c : str.str ()) {
        write (static_cast <uint8_t> (c));
    }

    return str.str ().size();
}

size_t Print::print(const __FlashStringHelper* inValue) {
    return writeImpl(inValue);
}

size_t Print::print(const char* inValue) {
    return writeImpl(inValue);
}
