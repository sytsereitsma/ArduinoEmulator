#ifndef PRINT_H__
#define PRINT_H__
#include <sstream>

enum Base {
    DEC = 10,
    HEX = 16,
    OCT = 8,
    BIN = 2,
};

class Print {
public:
    virtual ~Print () = default;

    virtual void write (uint8_t) = 0;

    virtual size_t println();
    virtual size_t println(char);
    virtual size_t println(int32_t);
    virtual size_t println(uint32_t);
    virtual size_t println(int64_t);
    virtual size_t println(float inValue, uint8_t inDigits);
    virtual size_t println(double inValue, uint8_t inDigits);
    virtual size_t println(const __FlashStringHelper*);
    virtual size_t println(const char*);
    
    virtual size_t print(char);
    virtual size_t print(int32_t);
    virtual size_t print(uint32_t);
    virtual size_t print(int64_t);
    virtual size_t print(float inValue, uint8_t inDigits=2);
    virtual size_t print(double inValue, uint8_t inDigits=2);
    virtual size_t print(const __FlashStringHelper*);
    virtual size_t print(const char*);
private:
    template <typename T>
    size_t writeImpl (T inValue) {
        std::ostringstream str;
        str << inValue;
        for (auto c : str.str ()) {
            write (static_cast <uint8_t> (c));
        }
        return str.str ().size ();
    }

    template <typename T>
    size_t writeln (T inValue) {
        size_t n = writeImpl (inValue);
        write('\n');
        return n + 1;
    }
};

#endif /* end of include guard: PRINT_H__ */